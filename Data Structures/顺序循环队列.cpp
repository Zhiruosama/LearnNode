// //
// // Created by murane on 24-11-13.
// //
// #include<bits/stdc++.h>
//
// using namespace std;
//
// class CircularQueue
// {
// public:
//     CircularQueue(int capacity)
//     {
//         m_front = 0;
//         m_rear = 0;
//         m_size = 0;
//         m_capacity = capacity;
//         m_data = new int[capacity];
//     }
//
//     ~CircularQueue()
//     {
//         delete[] m_data;
//     }
//
//     bool isEmpty()
//     {
//         return m_front == m_rear;
//     }
//
//     bool isFull()
//     {
//         return m_size == m_capacity;
//     }
//
//     void enqueue(int x)
//     {
//         if (isFull())
//         {
//             cout << "队列已满" << endl;
//             return;
//         }
//         m_data[m_rear] = x;
//         m_rear = (m_rear + 1) % m_capacity;
//         m_size++;
//     }
//
//     int dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << "队列已空" << endl;
//             return -1;
//         }
//         int value = m_data[m_front];
//         m_front = (m_front + 1) % m_capacity;
//         m_size--;
//         return value;
//     }
//
//     //获取队头元素的值
//     int peek()
//     {
//         if (isEmpty())
//         {
//             cout << "队列已空" << endl;
//             return -1;
//         }
//         return m_data[m_front];
//     }
//
// private:
//     int* m_data;
//     int m_front;
//     int m_rear;
//     int m_size;
//     int m_capacity;
// };
//
// int main()
// {
//     CircularQueue queue(12);
//     queue.enqueue(1);
//     queue.enqueue(2);
//     queue.enqueue(3);
//     cout << "Front element: " << queue.peek() << endl; // 输出: 1
//     queue.dequeue();
//     cout << "Front element after dequeue: " << queue.peek() << endl; // 输出: 2
//
//     return 0;
// }
