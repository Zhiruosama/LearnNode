// //
// // Created by murane on 24-11-10.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// struct Node
// {
//     int data;
//     Node* next=nullptr;
// };
//
// //单向循环链表
// class LoopLinkList
// {
// public:
//     LoopLinkList()
//     {
//         //初始化循环链表 然后头节点指向自己
//         m_head=new Node;
//         m_head->next=m_head;
//         m_tail=m_head;
//         m_length=0;
//     }
//     ~LoopLinkList()
//     {
//         Node* p=m_head->next;
//         while(p!=m_head)
//         {
//             Node* delNode=p;
//             cout<<"删除数据:"<<delNode->data<<endl;
//             p=p->next;
//             delete delNode;
//         }
//     }
//
//     //判断链表是否为空
//     bool isEmpty()
//     {
//         return m_head->next==m_head;
//     }
//     //得到链表长度
//     int length()
//     {
//         return m_length;
//     }
//     //数据添加到链表的头部
//     void preprend(int data)
//     {
//         Node* node=new Node;
//         node->data=data;
//         if(isEmpty())
//         {
//             m_tail=node;
//         }
//         node->next=m_head->next;
//         m_head->next=node;
//         ++m_length;
//     }
//     //数据添加到链表的尾部
//     void append(int data)
//     {
//         Node* node=new Node;
//         node->data=data;
//         node->next=m_tail->next;
//         m_tail->next=node;
//         m_tail=node;
//         ++m_length;
//     }
//     //将数据插入到链表任意位置，第一个数据元素pos=1
//     bool insert(int pos,int data)
//     {
//         if(pos<1||pos>=length()+1)
//         {
//             cout<<"插入位置无效"<<endl;
//             return false;
//         }
//         Node* p=m_head->next;
//         int j=0;
//         while(p!=m_head&&j<pos-1)
//         {
//             p=p->next;
//             ++j;
//         }
//         Node* node=new Node;
//         node->data=data;
//         if(pos==length()+1)
//         {
//             m_tail=node;
//         }
//         node->next=p->next;
//         p->next=node;
//         ++m_length;
//         return true;
//     }
//     //搜索数据，返回节点和位置，没找到返回nullptr
//     Node* find(int data,int& pos)
//     {
//         pos=0;
//         Node* p=m_head;
//         while(p->next!=m_head&&p->data!=data)
//         {
//             p=p->next;
//             pos++;
//         }
//         if(p==m_head)
//         {
//             return nullptr;
//         }
//         return p;
//     }
//     //删除节点
//     bool remove(int pos)
//     {
//         if(pos<1||pos>=length()+1)
//         {
//             cout<<"pos无效"<<endl;
//             return false;
//         }
//         Node* p=m_head->next;
//         for(int i=1;i<pos-1;i++)
//         {
//             p=p->next;
//         }
//         Node* delNode=p->next;
//         p->next=delNode->next;
//         delete delNode;
//         --m_length;
//         return true;
//     }
//     //遍历链表
//     void display()
//     {
//         Node* p=m_head->next;
//         if(p==m_head)
//         {
//             cout<<"空链表"<<endl;
//             return;
//         }
//         cout<<"链表值:";
//         while(p!=m_head)
//         {
//             cout<<p->data<<" ";
//             p=p->next;
//         }
//         cout<<endl;
//     }
//
// private:
//     Node* m_head=nullptr;
//     Node* m_tail=nullptr;
//     int m_length=0;
// };
//
// int main()
// {
//     LoopLinkList lls;
//     lls.preprend(1);
//     lls.append(2);
//     lls.append(3);
//     lls.preprend(4);
//     lls.insert(2,5);
//     lls.remove(3);
//     int pos=0;
//     Node* p=lls.find(3,pos);
//     cout<<"find data:"<<p->data<<" "<<"find pos:"<<pos<<endl;
//     cout<<"lls length:"<<lls.length()<<endl;
//
//     lls.display();
// }