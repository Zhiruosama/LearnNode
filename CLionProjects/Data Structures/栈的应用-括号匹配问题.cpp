// //
// // Created by murane on 24-11-12.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// bool isMatch(char start, char end)
// {
//     return (start == '(' && end == ')') ||
//         (start == '{' && end == '}') ||
//         (start == '[' && end == ']');
// }
//
// bool bracketDetect(string str)
// {
//     stack<char> st;
//     for (char bracket : str)
//     {
//         if (bracket == '(' || bracket == '{' || bracket == '[')
//         {
//             st.push(bracket);
//         }
//         else if (bracket == ')' || bracket == '}' || bracket == ']')
//         {
//             if (st.empty() || !isMatch(st.top(), bracket))
//             {
//                 return false;
//             }
//             st.pop();
//         }
//     }
//     return st.empty();
// }
//
// int main()
// {
//     string str1("[12[abc{helo}xxx]))");
//     string str2("(([12[abc{helo}xxx]=-=]))");
//     bool flag = bracketDetect(str1);
//     cout << str1 << "   字符串中的括号是否匹配呢? " << flag << endl;
//     flag = bracketDetect(str2);
//     cout << str2 << "   字符串中的括号是否匹配呢? " << flag << endl;
// }
