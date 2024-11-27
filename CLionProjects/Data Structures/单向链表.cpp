// //
// // Created by murane on 24-11-9.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// struct Node
// {
//     int data=0;
//     Node* next=nullptr;
// };
//
// class LinkList
// {
// public:
//     LinkList()
//     {
//         m_head=new Node;
//         if(m_head==nullptr) return;
//         m_head->next=nullptr;
//         m_tail=m_head;
//     }
//     ~LinkList()
//     {
//         Node* p=m_head;
//         while(p!=nullptr)
//         {
//             cout<<"释放资源："<<p->data<<endl;
//             Node* tmp=p;
//             p=p->next;
//             delete tmp;
//         }
//     }
//     //判断链表是否为空
//     bool isEmpty()
//     {
//         bool flag=(m_head->next==nullptr);
//         return flag;
//     }
//     //获取链表节点数量
//     int length()
//     {
//         return m_length;
//     }
//     //数据添加到链表的头部
//     void prepend(int data)
//     {
//         Node* pNode = new Node;
//         if(pNode==nullptr)
//         {
//             cout<<"新节点创建失败，请重试"<<endl;
//             return;
//         }
//         //初始化新节点
//         pNode->next=m_head->next;
//         pNode->data=data;
//         if(m_head->next==nullptr)
//         {
//             m_tail=pNode;
//         }
//         m_head->next=pNode;
//         m_length++;
//     }
//     //数据添加到链表的尾部
//     void append(int data)
//     {
//         Node* pNode=new Node;
//         pNode->data=data;
//         pNode->next=nullptr;
//         m_tail->next=pNode;
//         m_length++;
//     }
//     //数据插入到链表任意位置，第一个数据元素pos=1
//     bool insert(int pos,int data)
//     {
//         if(pos<1||pos>length()+1)
//         {
//             cout<<"pos非法，请重新输入"<<endl;
//             return false;
//         }
//
//         Node* p=m_head;
//         int j=0;
//         while(p!=nullptr&&j<pos-1)
//         {
//             p=p->next;
//             ++j;
//         }
//         Node* pNode=new Node;
//         pNode->data=data;
//         if(length()+1==pos)
//         {
//             m_tail=pNode;
//         }
//         pNode->next=p->next;
//         p->next=pNode;
//         m_length++;
//         return true;
//     }
//     //搜索数据，返回节点和位置，没找到返回nullptr
//     Node* find(int data,int& pos)
//     {
//         pos=1;
//         Node* p=m_head->next;
//         while(p!=nullptr&&p->data!=data)
//         {
//             p=p->next;
//             ++pos;
//         }
//         return p;
//     }
//     //删除节点
//     bool remove(int pos)
//     {
//         if(pos<1||pos>length())
//         {
//             cout<<"删除位置无效，请重新输入"<<endl;
//             return false;
//         }
//         Node* p=m_head;
//         int j=1;
//         while(p!=nullptr&&j<pos-1)
//         {
//             p=p->next;
//             ++j;
//         }
//         Node* delNode=p->next;
//         p->next=delNode->next;
//         if(delNode->next==nullptr)
//         {
//             m_tail=p;
//         }
//         delete delNode;
//         m_length--;
//         return true;
//     }
//     //遍历链表
//     void display()
//     {
//         Node* p=m_head->next;
//         if(p->next==nullptr)
//         {
//             cout<<"空链表"<<endl;
//             return;
//         }
//         cout<<"链表值:";
//         while(p!=nullptr)
//         {
//             cout<<p->data<<" ";
//             p=p->next;
//         }
//         cout<<endl;
//     }
//     //返回指定位置的节点的值
//     int value(int pos)
//     {
//         Node* p=m_head->next;
//         for(int i=0;i<pos;++i)
//         {
//             p=p->next;
//         }
//         return p->data;
//     }
//
// private:
//     int m_length=0;
//     Node* m_head=nullptr;
//     Node* m_tail=nullptr;
// };
//
// int main()
// {
//     LinkList ls;
//     ls.insert(1,2);
//     ls.append(10);
//     ls.prepend(20);
//     ls.insert(3,30);
//     ls.insert(4,40);
//     ls.insert(5,50);
//     ls.display();
//     ls.remove(5);
//     ls.display();
//     int pos=0;
//     Node* node=ls.find(50,pos);
//     cout<<"找到的节点的位置是:"<<pos<<endl;
//     cout<<"链表长度:"<<ls.length()<<endl;
// }