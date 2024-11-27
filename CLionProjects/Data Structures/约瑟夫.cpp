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
//     int pos;
//     Node* next;
//     Node(int value,int index):
//     data(value),pos(index),next(nullptr){}
// };
//
// class JosephusCircle
// {
// public:
//     JosephusCircle(int size)
//     {
//         if(size<0)
//         {
//             cout<<"人数应当大于0"<<endl;
//             return;
//         }
//         srand(time(0));
//         m_head=new Node(0,0);
//         Node* p=m_head;
//         for(int i=1;i<=size;i++)
//         {
//             Node* pNode=new Node(rand()%100,i);
//             p->next=pNode;
//             p=pNode;
//         }
//         p->next=m_head->next;
//     }
//     void display()
//     {
//         Node* p=m_head->next;
//         if(p==nullptr)
//         {
//             cout<<"空链表"<<endl;
//             return;
//         }
//        do
//         {
//             cout<<"value:"<<p->data<<",pos:"<<p->pos<<endl;
//             p=p->next;
//         }
//         while(p!=m_head->next);
//     }
//     void findSurvivor(int m)
//     {
//         if(m_head->next==nullptr)
//         {
//             cout<<"空链表"<<endl;
//             return;
//         }
//         Node* p=m_head;
//         while(p!=p->next)
//         {
//             for(int i=1;i<m;++i)
//             {
//                 p=p->next;
//             }
//             Node* delNode=p->next;
//             p->next=delNode->next;
//             cout<<"value:"<<delNode->data<<",pos:"<<delNode->pos<<endl;
//             delete delNode;
//         }
//         cout<<"value:"<<p->data<<",pos:"<<p->pos<<endl;
//         delete p;
//         delete m_head;
//     }
// private:
//     Node* m_head;
// };
//
// int main()
// {
//     JosephusCircle jos(41);
//     cout<<"遍历约瑟夫环:"<<endl;
//     jos.display();
//
//     cout<<"开始解决约瑟夫问题:"<<endl;
//     jos.findSurvivor(3);
// }