// //
// // Created by murane on 24-11-13.
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
// class LinkedQueue
// {
// public:
//     LinkedQueue()
//     {
//         m_front = nullptr;
//         m_rear = nullptr;
//     }
//
//     ~LinkedQueue()
//     {
//         while (m_front != nullptr)
//         {
//             Node* delNode = m_front;
//             m_front = m_front->next;
//             delete delNode;
//         }
//     }
//
//     bool isEmpty()
//     {
//         return m_front == nullptr;
//     }
//
//     void enqueue(int x)
//     {
//         Node* node = new Node(x);
//         if (isEmpty())
//         {
//             m_front = m_rear = node;
//         }
//         else
//         {
//             m_rear->next = node;
//             m_rear = node;
//         }
//     }
//
//     int dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << "队列为空" << endl;
//             return -1;
//         }
//         else
//         {
//             Node* delNode = m_front;
//             m_front = m_front->next;
//             int value = delNode->data;
//             delete delNode;
//             return value;
//         }
//     }
//
//     int peek()
//     {
//         if (isEmpty())
//         {
//             cout << "队列为空" << endl;
//         }
//         else
//         {
//             return m_front->data;
//         }
//     }
//
// private:
//     Node* m_front;
//     Node* m_rear;
// };
//
// int main()
// {
//     LinkedQueue lqueue;
//     lqueue.enqueue(1);
//     lqueue.enqueue(2);
//     lqueue.enqueue(3);
//     lqueue.enqueue(4);
//
//     cout << "当前队列的头部元素为:" << lqueue.peek() << endl;
//
//     lqueue.dequeue();
//
//     cout << "当前队列的头部元素为:" << lqueue.peek() << endl;
// }
