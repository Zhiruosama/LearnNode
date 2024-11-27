// //
// // Created by murane on 24-11-8.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// template<typename T>
// class Array
// {
// public:
//     Array(int size=64)
//     {
//         m_capacity=size;
//         m_count=0;
//         m_arry=new T[size]();
//     }
//     ~Array()
//     {
//         delete[] m_arry;
//     }
//
//     //在尾部添加元素
//     void append(T val)
//     {
//         if(m_count==m_capacity)
//         {
//             expand(m_capacity*2);
//         }
//         m_arry[m_count++]=val;
//     }
//     //在尾部删除元素
//     void popBack()
//     {
//         if(m_count==0)
//             return;
//         --m_count;
//     }
//     //插入元素
//     void insert(int pos,T val)
//     {
//         if(m_count==0||pos>m_count)
//         {
//             cout<<"插入位置无效，请重新输入pos"<<endl;
//             return;
//         }
//         if(m_capacity==m_count)
//         {
//             expand(2*m_capacity);
//         }
//         for(int i=m_count-1;i>=pos;--i)
//         {
//             m_arry[i+1]=m_arry[i];
//         }
//         m_arry[pos]=val;
//         ++m_count;
//     }
//     //删除元素
//     void remove(int pos)
//     {
//         if(pos<0||pos>m_count)
//         {
//             return;
//         }
//         for(int i=pos;i<m_count;++i)
//         {
//             m_arry[i]=m_arry[i+1];
//         }
//         --m_count;
//     }
//     //查找元素->返回位置
//     int find(T val)
//     {
//         for(int i=0;i<m_count;++i)
//         {
//             if(m_arry[i]==val)
//                 return i;
//         }
//         return -1;
//     }
//     //获取数组元素数量
//     int size()
//     {
//         return m_count;
//     }
//     //打印数据
//     void show()
//     {
//         if(m_count==0)
//             return;
//         for(int i=0;i<m_count;++i)
//         {
//             cout<<m_arry[i]<<endl;
//         }
//     }
//     //反转函数
//     void reserve()
//     {
//         T* p=m_arry;
//         T* q=m_arry+m_count-1;
//         while(q>p)
//         {
//             T tmp=*p;
//             *p=*q;
//             *q=tmp;
//             ++p;
//             --q;
//         }
//     }
//
// private:
//     void expand(int size)//扩容
//     {
//         T* ptr=new T[size]();
//         memcpy(ptr,m_arry,sizeof(T)*size);
//         delete[]m_arry;
//         m_arry=ptr;
//         m_capacity=size;
//     }
// private:
//     T* m_arry;//数组的起始位置
//     int m_capacity;//数组的容量
//     int m_count;//数组中元素的数量
// };
//
// int main()
// {
//     Array<char> arr;
//     arr.append('a');
//     arr.append('b');
//     arr.append('c');
//     arr.append('d');
//     arr.show();
//     cout<<"~~~~~~~~~~~~~~~~~~"<<endl;
//     arr.reserve();
//     arr.show();
//     // cout<<"~~~~~~~~~~~~~~~~~~"<<endl;
//     // arr.show();
//     // // cout<<arr.find(3)<<endl;
//     // cout<<"~~~~~~~~~~~~~~~~~~"<<endl;
//     // // arr.insert(2,7);
//     // arr.popBack();
//     // arr.show();
//     // cout<<"~~~~~~~~~~~~~~~~~~"<<endl;
//     // cout<<arr.size()<<endl;
// }