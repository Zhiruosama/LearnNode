// //
// // Created by murane on 24-11-11.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// struct Node
// {
//     int data;
//     Node* next = nullptr;
//     Node* prior = nullptr;
// };
//
// class LoopDLinkList
// {
// public:
//     LoopDLinkList()
//     {
//         m_head = new Node;
//         m_head->next = m_head;
//         m_head->prior = m_head;
//         m_tail = m_head;
//         m_length = 0;
//     }
//
//     ~LoopDLinkList()
//     {
//         Node* current = m_head->next;
//         while (current != m_head)
//         {
//             Node* tmp = current;
//             current = current->next;
//             cout << "删除数据:" << tmp->data << endl;
//             delete tmp;
//         }
//         delete m_head;
//     }
//
//     //判断链表是否为空
//     bool isEmpty()
//     {
//         return m_head->next == m_head;
//     }
//
//     //得到链表长度
//     int length()
//     {
//         return m_length;
//     }
//
//     //数据添加到链表头部
//     void prepend(int data)
//     {
//         Node* node = new Node;
//         node->data = data;
//         node->next = m_head->next;
//         node->prior = m_head;
//         if (isEmpty())
//         {
//             m_tail = node;
//         }
//         m_head->next->prior=node;
//         m_head->next = node;
//         m_length++;
//     }
//
//     //数据添加到链表尾部
//     void append(int data)
//     {
//         Node* node = new Node;
//         node->data = data;
//         node->next = m_tail->next;
//         node->prior = m_tail;
//         m_tail->next->prior=node;
//         m_tail->next = node;
//         m_tail = node;
//         m_length++;
//     }
//
//     //数据插入到链表任意位置，第一个数据元素pos=1
//     bool insert(int pos, int data)
//     {
//         if (pos < 1 || pos > length())
//         {
//             cout << "pos无效" << endl;
//             return false;
//         }
//         Node* p = m_head->next;
//         int j = 0;
//         while (p != m_head && j < pos - 1)
//         {
//             p = p->next;
//             j++;
//         }
//         Node* node = new Node;
//         node->data = data;
//         node->next = p->next;
//         node->prior = p;
//         if (pos == length())
//         {
//             m_tail = node;
//         }
//         p->next->prior = node;
//         p->next = node;
//         m_length++;
//         return true;
//     }
//
//     //搜索数据，返回节点和位置，没找到返回nullptr
//     Node* find(int data, int& pos)
//     {
//         pos = 1;
//         Node* p = m_head->next;
//         while (p != nullptr && p->data != data)
//         {
//             p = p->next;
//             pos++;
//         }
//         return p;
//     }
//
//     //删除节点
//     bool remove(int pos)
//     {
//         if (pos < 1 || pos > length())
//         {
//             cout << "pos无效" << endl;
//             return false;
//         }
//         Node* p = m_head;
//         for (int i = 1; i < pos; i++)
//         {
//             p = p->next;
//         }
//         Node* delNode = p->next;
//         p->next = delNode->next;
//         if (delNode->next != nullptr)
//         {
//             delNode->next->prior = p;
//         }
//         if (delNode == m_tail)
//         {
//             m_tail = p;
//         }
//         cout << "删除节点: " << delNode->data << endl;
//         delete delNode;
//         m_length--;
//         return true;
//     }
//
//     //遍历链表
//     void display()
//     {
//         Node* p = m_head->next;
//         if (p == nullptr)
//         {
//             cout << "空链表" << endl;
//         }
//         cout << "正向链表值为:";
//         while (p != m_head)
//         {
//             cout << p->data << " ";
//             p = p->next;
//         }
//         cout << endl;
//         Node* q = m_tail;
//         cout << "反向链表值为:";
//         while (q != m_head)
//         {
//             cout << q->data << " ";
//             q = q->prior;
//         }
//         cout << endl;
//     }
//
// private:
//     int m_length;
//     Node* m_head;
//     Node* m_tail;
// };
//
// int main()
// {
//     LoopDLinkList ldll;
//     ldll.prepend(1);
//     ldll.append(2);
//     ldll.append(3);
//     ldll.prepend(4);
//     ldll.append(5);
//     ldll.insert(4, 6);
//     ldll.remove(6);
//     int pos = 0;
//     Node* p = ldll.find(3, pos);
//     cout << "find data:" << p->data << ",find pos:" << pos << endl;
//
//     ldll.display();
// }
