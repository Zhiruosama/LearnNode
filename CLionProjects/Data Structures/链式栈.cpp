// //
// // Created by murane on 24-11-12.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// struct Node
// {
//     int data;
//     Node* next;
//
//     Node(int d): data(d), next(nullptr)
//     {
//     }
// };
//
// class LinkedStack
// {
// public:
//     LinkedStack()
//     {
//         m_top = nullptr;
//     }
//
//     ~LinkedStack()
//     {
//         while (m_top != nullptr)
//         {
//             Node* delNode = m_top;
//             m_top = m_top->next;
//             cout << "删除节点:" << delNode->data << endl;
//             delete delNode;
//         }
//     }
//
//     bool isEmpty()
//     {
//         return m_top == nullptr;
//     }
//
//     void push(int x)
//     {
//         Node* node = new Node(x);
//         node->next = m_top;
//         m_top = node;
//     }
//
//     int pop()
//     {
//         if (isEmpty())
//         {
//             cout << "空栈" << endl;
//             return -1;
//         }
//         Node* delNode = m_top;
//         m_top=m_top->next;
//         int value = delNode->data;
//         delete delNode;
//         return value;
//     }
//
//     int top()
//     {
//         return m_top->data;
//     }
//
//     void display()
//     {
//         if (isEmpty())
//         {
//             cout << "空栈" << endl;
//             return;
//         }
//         cout << "栈内元素:";
//         Node* p = m_top;
//         while (p != nullptr)
//         {
//             cout << p->data << " ";
//             p = p->next;
//         }
//         cout << endl;
//     }
//
// private:
//     Node* m_top; //栈顶指针，也是链表的头节点
// };
//
// int main()
// {
//     LinkedStack ls;
//     ls.push(5);
//     ls.push(4);
//     ls.push(3);
//     ls.push(2);
//     ls.push(1);
//
//     cout<<"弹出:"<<ls.pop()<<endl;
//
//     cout<<"当前栈顶元素为:"<<ls.top()<<endl;
//
//     ls.display();
// }
