// //
// // Created by murane on 24-11-13.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// class StackUsingQueues
// {
// public:
//     void push(int value)
//     {
//         m_q2.push(value);
//         while (!m_q1.empty())
//         {
//             m_q2.push(m_q1.front());
//             m_q1.pop();
//         }
//         swap(m_q1, m_q2);
//     }
//
//     int pop()
//     {
//         if (m_q1.empty())
//         {
//             cout << "栈空" << endl;
//             return -1;
//         }
//         int value = m_q1.front();
//         m_q1.pop();
//         return value;
//     }
//
//     int top() const
//     {
//         if (m_q1.empty())
//         {
//             cout << "栈空" << endl;
//             return -1;
//         }
//         return m_q1.front();
//     }
//
//     bool isEmpty()
//     {
//         return m_q1.empty();
//     }
//
// private:
//     queue<int> m_q1;
//     queue<int> m_q2;
// };
//
// int main()
// {
//     StackUsingQueues stack;
//     stack.push(1);
//     stack.push(2);
//     stack.push(3);
//
//     cout << "Top: " << stack.top() << endl; // 输出 3
//     cout << "Pop: " << stack.pop() << endl; // 输出 3
//     cout << "Pop: " << stack.pop() << endl; // 输出 2
//     stack.push(4);
//     cout << "Pop: " << stack.pop() << endl; // 输出 4
//     cout << "Pop: " << stack.pop() << endl; // 输出 1
//
//     return 0;
// }
