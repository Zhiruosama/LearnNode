// //
// // Created by murane on 24-11-13.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// class QueueUsingStacks
// {
// public:
//     void enqueue(int value)
//     {
//         m_st1.push(value);
//     }
//
//     int dequeue()
//     {
//         if (m_st2.empty())
//         {
//             if (m_st1.empty())
//             {
//                 cout << "空队列" << endl;
//             }
//             moveStack1ToStack2();
//         }
//         int topValue = m_st2.top();
//         m_st2.pop();
//         return topValue;
//     }
//
//     int front()
//     {
//         if (m_st2.empty())
//         {
//             if (m_st1.empty())
//             {
//                 cout << "空队列" << endl;
//             }
//             moveStack1ToStack2();
//         }
//         return m_st2.top();
//     }
//
//     bool isEmpty() const
//     {
//         return m_st1.empty() && m_st2.empty();
//     }
//
// private:
//     void moveStack1ToStack2()
//     {
//         while (!m_st1.empty())
//         {
//             m_st2.push(m_st1.top());
//             m_st1.pop();
//         }
//     }
//
//     stack<int> m_st1;
//     stack<int> m_st2;
// };
//
// int main()
// {
//     QueueUsingStacks queue;
//     queue.enqueue(1);
//     queue.enqueue(2);
//     queue.enqueue(3);
//
//     cout << "Front: " << queue.front() << endl; // 输出 1
//     cout << "Dequeue: " << queue.dequeue() << endl; // 输出 1
//     queue.enqueue(4);
//     cout << "Front: " << queue.front() << endl; // 输出 2
//     cout << "Dequeue: " << queue.dequeue() << endl; // 输出 2
//     cout << "Dequeue: " << queue.dequeue() << endl; // 输出 3
//     cout << "Dequeue: " << queue.dequeue() << endl; // 输出 4
//
//     return 0;
// }
