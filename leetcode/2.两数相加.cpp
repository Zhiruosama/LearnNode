// //
// // Created by murane on 24-11-4.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
//
// struct ListNode
// {
//     int val;
//     ListNode* next;
//
//     ListNode() : val(0), next(nullptr)
//     {
//     }
//
//     ListNode(int x) : val(x), next(nullptr)
//     {
//     }
//
//     ListNode(int x, ListNode* next) : val(x), next(next)
//     {
//     }
// };
//
// class Solution
// {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
//     {
//         int carry = 0;
//         ListNode* m_head = new ListNode;
//         ListNode* cur = m_head;
//         while (l1 != nullptr || l2 != nullptr || carry != 0)
//         {
//             int sum = carry;
//             if (l1 != nullptr)
//             {
//                 sum += l1->val;
//                 l1 = l1->next;
//             }
//             if (l2 != nullptr)
//             {
//                 sum += l2->val;
//                 l2 = l2->next;
//             }
//             cur->next = new ListNode(sum % 10);
//             carry = sum / 10;
//             cur = cur->next;
//         }
//         return m_head->next;
//     }
// };
