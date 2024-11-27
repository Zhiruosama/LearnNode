// //
// // Created by murane on 24-11-12.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// const int MAX_SIZE=100;
// class ArrayStack
// {
// public:
//     ArrayStack():m_top(0){}
//     ~ArrayStack()=default;
//     bool isEmpty()
//     {
//         return m_top==0;
//     }
//     bool isFull()
//     {
//         return m_top==MAX_SIZE;
//     }
//     //压栈
//     void push(int x)
//     {
//         if(m_top==MAX_SIZE)
//         {
//             cout<<"栈已满，无法再添加数据"<<endl;
//             return ;
//         }
//         m_data[m_top++]=x;
//     }
//     //出栈
//     int pop()
//     {
//         if(isEmpty())
//         {
//             cout<<"栈空，无数据可出栈"<<endl;
//             return -1;
//         }
//         return m_data[--m_top];
//     }
//     //得到栈顶元素
//     int top()
//     {
//         if(isEmpty())
//         {
//             cout<<"栈空，无数据可获取"<<endl;
//             return -1;
//         }
//         return m_data[m_top-1];
//     }
//
//     void display()
//     {
//         if(isEmpty())
//         {
//             cout<<"栈空，无法遍历"<<endl;
//             return;
//         }
//         for(int i=0;i<m_top;++i)
//         {
//             cout<<m_data[i]<<" ";
//         }
//         cout<<endl;
//     }
// private:
//     int m_data[MAX_SIZE];
//     int m_top;
// };
//
// int main()
// {
//     ArrayStack as;
//     as.push(1);
//     as.push(2);
//     as.push(3);
//     as.push(4);
//     as.push(5);
//
//     cout<<"得到栈顶元素:"<<as.top()<<endl;
//
//     cout<<"弹出栈顶元素:"<<as.pop()<<endl;
//
//     cout<<"得到栈顶元素:"<<as.top()<<endl;
//
//     as.display();
// }