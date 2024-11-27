// #include<bits/stdc++.h>
//
// using namespace std;
//
// struct Node
// {
//     int data = 0;
//     Node* next = nullptr;
// };
//
// class LinkList
// {
// public:
//     LinkList()
//     {
//         m_head = new Node;
//         m_head->next = nullptr;
//         m_tail = m_head;
//     }
//
//     ~LinkList()
//     {
//         Node* p = m_head->next;
//         while (p != nullptr)
//         {
//             Node* delNode = p;
//             p = p->next;
//             cout << "删除节点:" << delNode->data << endl;
//             delete delNode;
//         }
//     }
//
//     bool isEmpty()
//     {
//         return m_head->next == nullptr;
//     }
//
//     int length()
//     {
//         return m_length;
//     }
//
//     void prepend(int data)
//     {
//         Node* node = new Node;
//         node->data = data;
//         if (m_head->next == nullptr)
//         {
//             m_tail = node;
//         }
//         node->next = m_head->next;
//         m_head->next = node;
//         m_length++;
//     }
//
//     void append(int data)
//     {
//         Node* node = new Node;
//         node->data = data;
//         node->next = nullptr;
//         m_tail->next = node;
//         m_length++;
//     }
//
//     void insert(int data, int pos)
//     {
//         Node* node = new Node;
//         node->data = data;
//         Node* cur = m_head->next;
//         for (int i = 0; i < pos - 1; ++i)
//         {
//             cur = cur->next;
//         }
//         node->next=cur->next;
//         cur->next=node;
//         m_length++;
//     }
//
//     void display()
//     {
//         Node* p = m_head;
//         while (p->next != nullptr)
//         {
//             cout << p->next->data << " ";
//             p = p->next;
//         }
//         cout << endl;
//     }
//
// private:
//     int m_length = 0;
//     Node* m_head;
//     Node* m_tail;
// };
//
// int main()
// {
//     LinkList ls;
//     ls.prepend(1);
//     ls.prepend(2);
//     ls.prepend(3);
//     ls.append(4);
//     ls.insert(5,4);
//     ls.display();
// }
