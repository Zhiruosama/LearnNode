// //
// // Created by murane on 24-11-21.
// //
// #include<bits/stdc++.h>
//
// using namespace std;
//
// class Solution
// {
// public:
//     bool isValid(string s)
//     {
//         stack<char> stk;
//         for(char c:s)
//         {
//             if(c=='('||c=='['||c=='{')
//             {
//                 stk.push(c);
//             }
//             else
//             {
//                 if(stk.empty()) return false;
//                 char top=stk.top();
//                 if((c==')'&&top=='(')||(c==']'&&top=='[')||(c=='}'&&top=='{'))
//                 {
//                     stk.pop();
//                 }
//                 else
//                 {
//                     return false;
//                 }
//             }
//         }
//         return stk.empty();
//     }
// };
//
// int main()
// {
//     Solution sl;
//     string s="()";
//     cout<<"ans:"<<sl.isValid(s);
// }