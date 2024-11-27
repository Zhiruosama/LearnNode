//
// Created by murane on 24-10-23.
//
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <list>
#include <functional>
#include <memory>

using namespace std;

void test1(int x, int y)
{
    //lambda表达式
    //[捕获列表](参数列表) 函数选项->返回值类型{函数体};

    [x,y]()mutable
    {
        x++;
        y++;
        cout << x << endl;
    }();
    cout << x << endl;
}

void test2()
{
    //字符串原始字面量
    //R "xxx(原始字符串)xxx"
    //xxx类似于注释 且前后必须一直 输出时不会输出xxx的内容
    //主要用于避免一些特殊符号的转译
    //例如\n \t等会进行转译的符号 字符串原始字面量的目的就是进行直接输出
    const string str1 = "https\hello\world\test";
    cout << str1 << endl;
    cout << "**********************" << endl;
    const string str2 = R"(https\hello\world\test)";
    cout << str2 << endl;
    cout << "**********************" << endl;
    const string str3 = R"(https\hello\world\test)";
    cout << str3;
    //或是需要写一段很长的字符串 但需要多行编写 使用原始字面量则不需要用
    //'\'进行连接
    const string str4 = "<html>\
<title>\
<head>\
<body>";

    cout << str4 << endl;
    cout << "**********************" << endl;
    const string str5 = R"(<html>
<title>
<head>
<body>)";

    cout << str5 << endl;
}

void test3()
{
    //nullptr指针空值类型
    //会自动初始化为对应类型指针(隐式匹配指针类型)
    //c语言中NULL实际是一个(void*) 0 而c++中NULL是一个0
    [[maybe_unused]] int* ptr1 = nullptr;
    [[maybe_unused]] char* ptr2 = nullptr;
}

void test4(const int num)
{
    //constexpr修饰常量表达式
    //const修饰常量 变量只读
    [[maybe_unused]] const int a = 10;
    //a=11; error 只读不可修改
    //传入的num依旧是变量 const修饰以后只是表示在函数体内部无法修改num
    //constexpr修饰的常量表达式在编译期间就会得出计算结果 提高了效率
    //constexpr不能修饰struct或者class 但可以修饰struct或class生成的对象
    //即生成后的对象内部数据都不能进行修改
}

void test5()
{
    //自动类型推导
    //auto 语法： auto 变量名 = 变量值; 要进行初始化
    //当变量不是指针或者引用类型，推导结果不会保留const,volatile关键词
    //auto a; error 没有初始化
    //auto double a; error auto就是类型 不能再接一个类型
    int tmp = 10;
    //a1:const int
    const auto a1 = tmp;
    //a2:int 因为不是引用或指针 所以const被忽略
    [[maybe_unused]] auto a2 = a1;
    const auto& a3 = tmp;
    auto& a4 = a3;
    auto* pt = &a1;

    //*********************************
    //不能使用auto的场景
    //1.auto不能作为函数参数使用
    //int func(auto a,auto b) error

    //2.不能用于类的非静态成员变量的初始化
    /*class test
    {
        auto v1=0; error
    };*/

    //3.不能使用auto定义数组
    //auto t1[] error
    //auto t2[]={1,2,3,4} error

    //4.无法使用auto推导出模板参数
    //**********************************
}

void test6()
{
    //auto的使用
    //1.对STL容器进行遍历
    //常规的STL容器的遍历都需要用到迭代器
    //具体操作如下
    map<int, string> mp;
    mp.insert(make_pair(1, "ace"));
    mp.insert(make_pair(2, "sabo"));
    mp.insert(make_pair(3, "luffy"));
    map<int, string>::iterator it = mp.begin();
    for (; it != mp.end(); it++)
    {
        cout << "key: " << it->first << ", value: " << it->second << endl;
    }
    //但是使用auto进行遍历可以使得代码简洁干净
    cout << "下列为auto遍历" << endl;
    cout << "*********************" << endl;
    for (auto& ele : mp)
    {
        cout << "key: " << ele.first << ", value: " << ele.second << endl;
    }
    //可见auto的自动推导 使得遍历非常方便
}

//test7
int func_int()
{
}

const int func_cint()
{
}

template <typename T>
class Container
{
public:
    void print(T& t)
    {
        for (m_it = t.begin(); m_it != t.end(); m_it++)
        {
            cout << m_it->first << " " << m_it->second << endl;
        }
    }

private:
    decltype(T().begin()) m_it;
};

void test7()
{
    //decltype类型推导
    //decltype(表达式) 表达式仅用于类型推导
    [[maybe_unused]] int a = 10;
    decltype(a) b = 99; //b->int
    decltype(a + 3.14) c = 52.13; //c->double
    //表达式也可以是函数 根据函数的返回值进行类型推导
    decltype(func_int()) d = 12; //d->int
    //要是返回值是const int 那最终推导出的是int类型 **唯一特例
    //如果是const int& 则推导出const int&
    //如果是const int&& 则推导出const int&&..
    //其它都是返回什么推导什么
    decltype(func_cint()) e = 12;

    //左值就是可以取地址的一些变量，一些常量（不可取地址）就是右值
    //表达式是一个左值，或者被括号()保卫，则推导出的是表达式类型的引用（限定符不可忽略）
    //f: int&
    int n = 0, m = 0;
    decltype((a)) f = a;
    decltype(n = n + m) g = n;
    //这时候n=n+m是一个左值 所以g的类型是int&
}

//返回值类型后值
template <typename T, typename U>
auto add(T t, U u) -> decltype(t + u)
    //auto被后面的decltype给初始化了
{
    return t + u;
}

//final override关键词的使用
class Base
{
public:
    virtual void test()
    {
        cout << "Base class...";
    }
};

class Child : public Base
{
public:
    void test() //表示截至到这里 test不能再被它的子类重写
    {
        cout << "Child class...";
    }
};

//如果用final修饰一个类(写在类的后面class Child final) 则会使得这个类不可被继承

class GrandChild : public Child
{
public:
    void test() override //用于*检查*是否是重写的函数 如果不是则会报错
    {
        cout << "GrandChild class...";
    }
};

template <typename T>
using MyMap = map<int, T>;

int test8(int a, string b)
{
    //using的使用
    cout << "a: " << a << " " << "b: " << b;
    return 0;
    //using还可以给一个模板定义别名
    //using跟typedef用法一样，主要优势就是using的可读性更强,更简洁易读
}

using funcptr = void(*)(int, string);

class Test
{
public:
    //重载()
    void operator()(string msg)
    {
        cout << "仿函数： " << msg << endl;
    }

    //将类对象转换成函数指针
    operator funcptr()
    {
        return hello;
    }

    static void hello(int a, string s)
    {
        cout << "number: " << a << ", name: " << s << endl;
    }

    Test(int num): m_num(num)
    {
        cout << "构造函数调用 初始化m_num..." << endl;
    };

    Test(string st): m_string(st)
    {
        cout << "构造函数调用 初始化m_string..." << endl;
    };

    Test(int max, int min): Test(max)
    {
        this->m_min = min > 0 && min < max ? min : 1;
    }

    ~Test()
    {
        cout<<"析构函数调用..."<<endl;
    }

    void putout()
    {
        cout << "max: " << m_max << " " << "min: " << m_min;
    }

    void output(int x, int y)
    {
        cout << "x: " << x << " y: " << y << endl;
    }

    void checkid()
    {
        cout << "id: " << m_id << endl;
    }

    int& m_number()
    {
        return m_id;
    }

    void print()
    {
        cout << "m_num: " << m_num << endl;
    }

    int m_id = 10;
    int m_max;
    int m_min;
    int m_mid;
    int m_num;
    string m_string;
};

class ChildTest : public Test
{
public:
    //通过using使得子类可以直接使用父类的构造函数 即继承构造函数
    using Test::Test;
    //如果在子类中写同名函数 会隐藏父类中的隐藏函数
    //那么需要使用using Test::函数名
    //如此便可以访问到父类的重载函数了
};

//用initializer_list<>来传入参数
//可以用该容器来传入复数个相同类型的参数
void test9(initializer_list<int> ls)
{
    auto it = ls.begin();
    for (; it != ls.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    // test9({'a','b','c','d','e'});
}

void test10()
{
    //基于范围的for循环
    vector<int> vt{1, 2, 3, 4, 5, 6, 7, 8, 9};
    //相比于原始的for循环格式更加简洁简单
    //但功能没有区别
    for (const auto& item : vt)
    {
        //加入const以后就变为只读
        // item++;
        cout << item << endl;
    }
    for (auto item : vt)
    {
        cout << item << endl;
    }
}

void test11()
{
    //关系型容器
    //key-value类型容器的遍历
    map<int, string> m{
        {1, "lucy"}, {2, "lily"}, {3, "tom"}
    };
    for (auto& it : m)
    {
        cout << "key: " << it.first << " " << "value: " << it.second;
        cout << endl;
    }
    cout << endl;
    set<int> st{1, 2, 3, 4, 5};
    //set类型本身具有只读性质
    //所以即使使用"auto进行遍历 也不能对里面的值进行修改
    for (auto& item : st)
    {
        //cout<<item++<<endl; //error
        cout << item << endl;
    }
    cout << endl;
    int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto& item : arr)
    {
        cout << item << endl;
    }
    //基于范围的for循环的效率更高
    //因为一般的for循环在每次循环后都会再进行边界的判断 基于范围的for循环
    //在读取容器or数组的时候就已经确定了边界，剩下的就是进行遍历
}

void print(int num, string name)
{
    cout << "id: " << num << ", name: " << name << endl;
}

class A
{
public:
    A(const function<void(int, string)>& f): callback(f)
    {
    }

    void notify(int id, string name)
    {
        callback(id, name);
    }

private:
    function<void(int, string)> callback;
};

void test12()
{
    //可调用对象包装器、绑定器
    /*可调用对象分为四大类
     * 1.是一个函数指针
     * 2.是一个具有operator()成员函数的类对象（仿函数） *跳转237看例子*
     * 3.是一个可被转换为函数指针的类对象  *跳转243看例子*
     * 4.是一个类成员函数指针或者类成员指针
     */
    //包装普通函数
    function<void(int, string)> f1 = print;
    //包装类的静态函数
    function<void(int, string)> f2 = Test::hello;
    //包装仿函数
    // Test ta;
    // function<void(string)> f3 = ta;
    // //包装转换为函数指针的对象
    // Test tb;
    // function<void(int, string)> f4 = tb;
    //
    // f1(1, "string");
    // f2(2, "test");
    // f3("damn");
    // f4(4, "hello");
    //
    // cout << endl;
    //
    // A aa(print);
    // aa.notify(1, "A");
    // A ab(Test::hello);
    // ab.notify(2, "B");
    // A ac(ta);
    // ac.notify(3, "C");
    // A ad(tb);
    // ad.notify(4, "D");
}

void testFunc(int x, int y, const function<void(int, int)>& f)
{
    if (x % 2 == 0)
    {
        f(x, y);
    }
}

void output_add(int x, int y)
{
    cout << "x: " << x << ", y: " << y
        << ", x+y: " << x + y << endl;
}

void test13()
{
    for (int i = 0; i < 10; ++i)
    {
        auto f = bind(output_add, i + 100, i + 200);
        testFunc(i, i, f);
    }

    //成员函数绑定
    // Test t;
    // auto f2 = bind(&Test::output, &t, 520, placeholders::_1);
    // function<void(int, int)> f22 = bind(&Test::output, &t, 520, placeholders::_1);
    // f2(1314);

    //成员变量
    // auto f3 = bind(&Test::m_number, &t); //仿函数
    // function<int&(void)> f33 = bind(&Test::m_number, &t); //包装器类型
    // cout << f3() << endl;
    // f3() = 666;
    // cout << f3() << endl;
}

void test14()
{
    using ptr = void(*)(int);

    ptr p1 = [](int x)
    {
        cout << "x: " << x << endl;
    };

    p1(11);

    //报错 因为对外部变量进行了捕获
    //只有当不捕获外部变量的时候才能将其作为一个函数指针使用
    // ptr p2 = [=](int x)
    // {
    //     cout<<"x: "<<x<<endl;
    // };
    function<void(int)> fff = [=](int x)
    {
        cout << "x: " << x << endl;
    };
    fff(111);
}

void test15()
{
    //右值引用 左值引用
    //左值 locator value 右值 read value
    //左边可取地址 右边只读不可取地址
    //左值
    int num = 9;
    //左值引用
    int& a = num; //相当于num的别名
    //右值
    //常量数值
    //右值引用
    int&& b = 8;
    //常量右值引用
    const int&& d = 6;
    //常量左值引用
    const int& c = num; //指针常量，地址不可变，数值可变
    const int& f = b;
    const int& g = d;
}

class Test1
{
public:
    //默认构造函数
    Test1(): m_num(new int(100))
    {
        cout << "construct" << endl;
        printf("m_num地址： %p\n", m_num);
    }

    //拷贝构造函数
    Test1(const Test1& a): m_num(new int(*a.m_num))
    {
        cout << "copy construct" << endl;
    }

    //移动构造函数->复用其他对象中的资源(堆内存)
    //m_num, 浅拷贝
    Test1(Test1&& a): m_num(a.m_num)
    {
        a.m_num = nullptr;
        cout << "move construct" << endl;
    }

    ~Test1()
    {
        cout << "destrcut Test1 class" << endl;
        delete m_num;
    }

    int* m_num;
};

Test1 getObj()
{
    Test1 t;
    return static_cast<Test1>(t);
}

void printValue(int& i)
{
    cout << "l-value: " << i << endl;
}

void printValue(int&& i)
{
    cout << "r-value: " << i << endl;
}

void forward(int&& k)
{
    printValue(k);
}

void test16()
{
    //智能指针
    //shared_ptr unique_ptr weak_ptr
    //通过构造函数初始化
    shared_ptr<int> ptr1(new int(3));
    cout << "ptr1 use_count: " << ptr1.use_count() << endl;

    //通过移动构造和拷贝构造函数初始化
    shared_ptr<int> ptr2 = move(ptr1);
    cout << "ptr1 use_count: " << ptr1.use_count() << endl;
    cout << "ptr2 use_count: " << ptr2.use_count() << endl;

    shared_ptr<int> ptr3 = ptr2;
    cout << "ptr2 use_count: " << ptr2.use_count() << endl;
    cout << "ptr3 use_count: " << ptr3.use_count() << endl;

    //通过std::make_shared初始化
    shared_ptr<int> ptr4 = make_shared<int>(8);

    //通过reset初始化
    ptr4.reset();
    cout << "ptr4 use_count: " << ptr4.use_count() << endl;

    ptr4.reset(new int(99));
    cout << "ptr4 use_count: " << ptr4.use_count() << endl;

    shared_ptr<Test> ptr5(new Test(8));

    //获取原始指针
    Test* t = ptr5.get();
    t->print();

    shared_ptr<Test> ppp(new Test(100), [](Test* t)
    {
        //释放内存
        delete t;
        cout << "析构函数被调用..." << endl;
    });
}

void test17()
{
    //独占智能指针的初始化
    //通过构造函数初始化
    unique_ptr<int> ptr1(new int(9));

    //通过移动构造函数初始化
    unique_ptr<int> ptr2 = move(ptr1);

    //通过reset初始化
    ptr2.reset(new int(8));

    //获取原始指针
    unique_ptr<Test> ptr3(new Test(1));
    Test* pt = ptr3.get();
    pt->print();
    ptr3->print();

    using ptrFunc = void(*)(Test*);
    unique_ptr<Test, function<void(Test*)>> ptr4(new Test("hello"), [=](Test* t)
    {
        cout << "-----" << endl;
        delete t;
    });

    //独占的智能指针可以管理数组类型的地址，能够自动释放
    unique_ptr<Test[]> ptr5(new Test[3]{Test(1),Test(2),Test(3)});

    unique_ptr<Test[]> ptr6(new Test[3]{Test(1),Test(2),Test(3)});
}


int main()
{
    test17();
}
