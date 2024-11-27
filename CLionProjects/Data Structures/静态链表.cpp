// //
// // Created by murane on 24-11-8.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// struct Node
// {
//     int data;
//     int next;
// };
//
// //静态链表列
// class SLinkList
// {
// public:
//     SLinkList(int size)
//     {
//         m_size=size;
//         m_length=0;
//         m_list=new Node[size];
//         m_list[0].next=-1;
//         for(int i=1;i<size;++i)
//         {
//             m_list[i].next=-2;
//         }
//
//     }
//     ~SLinkList()
//     {
//         if(m_list)
//         {
//             delete[]m_list;
//             m_list=nullptr;
//         }
//     }
//     //插入元素，把数据放到某个元素之前
//     bool insert(int pos,int data)
//     {
//         if(pos<0||pos>m_size)
//         {
//             cout<<"位置不合法，请重新输入"<<endl;
//             return false;
//         }
//
//         //找链表中的空位
//         int index=-1;
//         for(int i=0;i<m_size;++i)
//         {
//             if(m_list[i].next==-2)
//             {
//                 index=i;
//                 break;
//             }
//         }
//
//         if(index==-1)
//         {
//             cout<<"链表已满，无法插入"<<endl;
//             return false;
//         }
//
//         //找目标节点的上一个节点
//         //这个count<pos就是防止越过目标节点
//         int current=0;
//         int count=0;
//         while(m_list[current].next!=-1&&count<pos)
//         {
//             current=m_list[current].next;
//             ++count;
//         }
//
//         m_list[index].data=data;
//         m_list[index].next=m_list[current].next;
//         m_list[current].next=index;
//         m_length++;
//         return true;
//     }
//     //删除元素
//     void remove(int pos)
//     {
//         if(pos<0||pos>=m_length)
//         {
//             cout<<"位置不合法，重新输入"<<endl;
//             return;
//         }
//
//         int current=0;
//         int count=0;
//         while(m_list[current].next!=-1&&count<pos)
//         {
//             current=m_list[current].next;
//             ++count;
//         }
//
//         int delPos=m_list[current].next;
//         m_list[current].next=m_list[delPos].next;
//         m_list[delPos].data=0;
//         m_list[delPos].next=-2;
//         m_length--;
//     }
//     //查找元素，返回位置
//     int find(int data)
//     {
//         int current=0;
//         while(m_list[current].next!=-1)
//         {
//             if(m_list[current].data==data)
//             {
//                 return current;
//             }
//             current=m_list[current].next;
//         }
//         return -1;
//     }
//     //遍历元素
//     void display()
//     {
//         int current=m_list[0].next;
//         while(current!=-1)
//         {
//             cout<<m_list[current].data<<endl;
//             current=m_list[current].next;
//         }
//     }
// private:
//     Node* m_list=nullptr;
//     int m_size;//链表的容量
//     int m_length;//元素数量
// };
//
// int main()
// {
//     SLinkList list(10);
//     list.insert(0,2);
//     list.insert(1,4);
//     list.insert(2,6);
//     list.insert(3,8);
//     list.insert(4,10);
//
//     cout<<list.find(4)<<endl;
//     cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
//     list.display();
//     cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
//     list.remove(3);
//     list.display();
// }