// //
// // Created by murane on 24-11-13.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// const int MAX_SIZE = 100;
//
// class ArrayQueue
// {
// public:
//     ArrayQueue(): m_front(0), m_rear(0)
//     {
//     }
//
//     bool isEmpty()
//     {
//         return m_front == m_rear;
//     }
//
//     bool isFull()
//     {
//         return m_front == MAX_SIZE;
//     }
//
//     void enqueue(int x)
//     {
//         if (isFull())
//         {
//             cout << "队列已满" << endl;
//             return;
//         }
//         m_data[m_rear++] = x;
//     }
//
//     int dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << "队列为空" << endl;
//             return -1;
//         }
//         return m_data[m_front++];
//     }
//
//     //获取队列头部元素的值
//     int peek()
//     {
//         if (isEmpty())
//         {
//             cout << "队列为空" << endl;
//             return -1;
//         }
//         return m_data[m_front];
//     }
//
// private:
//     int m_data[MAX_SIZE];
//     int m_front;
//     int m_rear;
// };
//
// int main()
// {
//     ArrayQueue queue;
//     queue.enqueue(1);
//     queue.enqueue(2);
//     queue.enqueue(3);
//     queue.enqueue(4);
//
//     cout << "此时队列头部元素为:" << queue.peek() << endl;
//
//     queue.dequeue();
//
//     cout << "此时队列头部元素为:" << queue.peek() << endl;
// }
