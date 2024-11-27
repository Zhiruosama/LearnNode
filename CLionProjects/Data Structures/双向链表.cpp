// //
// // Created by murane on 24-11-10.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// struct Node
// {
//     Node(int value):data(value){}
//     int data;
//     Node* next=nullptr;
//     Node* prior=nullptr;
// };
//
// class DLinkList
// {
// public:
//     DLinkList()
//     {
//         m_head=new Node(0);
//         m_tail=new Node(0);
//         m_head->next=nullptr;
//         m_head->prior=nullptr;
//         m_tail=m_head;
//         m_length=0;
//     }
//     ~DLinkList()
//     {
//         while(length())
//         {
//             remove(1);
//         }
//         delete m_head;
//     }
//     //判断链表是否为空
//     bool isEmpty()
//     {
//         return m_head->next==nullptr;
//     }
//     //得到链表长度
//     int length()
//     {
//         return m_length;
//     }
//     //数据添加到链表头部
//     void prepend(int data)
//     {
//         Node* node=new Node(data);
//         node->next=m_head->next;
//         node->prior=m_head;
//         if(m_head->next!=nullptr)
//         {
//             m_head->next->prior=node;
//         }
//         else
//         {
//             m_tail=node;
//         }
//         m_head->next=node;
//         ++m_length;
//     }
//     //数据添加到链表尾部
//     void append(int data)
//     {
//         Node* node=new Node(data);
//         node->next=nullptr;
//         node->prior=m_tail;
//         m_tail->next=node;
//         m_tail=node;
//         ++m_length;
//     }
//     //数据插入到链表任意位置，第一个数据元素pos=1
//     bool insert(int pos,int data)
//     {
//         Node* node=new Node(data);
//         if(pos<1||pos>length()+1)
//         {
//             cout<<"位置无效"<<endl;
//             return false;
//         }
//         Node* p=m_head;
//         int j=0;
//         while(p!=nullptr&&j<pos-1)
//         {
//             p=p->next;
//             ++j;
//         }
//         node->next=p->next;
//         node->prior=p;
//         if(p->next!=nullptr)
//         {
//             p->next->prior=node;
//         }
//         else
//         {
//             m_tail=node;
//         }
//         p->next=node;
//         m_length++;
//     }
//     //搜索数据，返回节点和位置，没找到返回nullptr
//     Node* find(int data,int& pos)
//     {
//         pos=1;
//         Node* p=m_head->next;
//         while(p->next!=nullptr&&p->data!=data)
//         {
//             p=p->next;
//         }
//         return p;
//     }
//     //删除节点
//     bool remove(int pos)
//     {
//         if(pos<1||pos>length())
//         {
//             cout<<"位置无效"<<endl;
//             return false;
//         }
//         Node* p=m_head;
//         for(int i=0;i<pos-1;++i)
//         {
//             p=p->next;
//         }
//         Node* delNode=p->next;
//         p->next=delNode->next;
//         if(p->next!=nullptr)
//         {
//             p->next->prior=p;
//         }
//         else
//         {
//             m_tail=p;
//         }
//         cout<<"删除节点:"<<delNode->data<<endl;
//         delete delNode;
//         --m_length;
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
//         cout<<"正向链表值为:";
//         while(p!=nullptr)
//         {
//             cout<<p->data<<" ";
//             p=p->next;
//         }
//         cout<<endl;
//         Node* q=m_tail;
//         cout<<"反向链表值为:";
//         while(q!=nullptr&&q!=m_head)
//         {
//             cout<<q->data<<" ";
//             q=q->prior;
//         }
//         cout<<endl;
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
//     DLinkList dll;
//     dll.prepend(1);
//     dll.append(2);
//     dll.prepend(3);
//     dll.prepend(4);
//     dll.append(5);
//     dll.display();
//
//     int pos=0;
//     Node* p=dll.find(4,pos);
//     cout<<"find pos:"<<pos<<",find value:"<<p->data<<endl;
//
//     dll.remove(3);
//     dll.display();
// }
