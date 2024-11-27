// //
// // Created by murane on 24-11-13.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// int getPrencedence(char op)
// {
//     switch (op)
//     {
//     case '+':
//     case'-':
//         return 1;
//     case'*':
//     case'/':
//         return 2;
//     case'^':
//         return 3;
//     default:
//         return 0;
//     }
// }
//
// bool isOpeator(char c)
// {
//     return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
// }
//
// string infixToPostfix(const string infix)
// {
//     stack<char> operators;
//     string postfix;
//
//     for (char c : infix)
//     {
//         if (isspace(c))
//         {
//             continue;
//         }
//
//         if (isdigit(c) || isalpha(c))
//         {
//             postfix += c;
//         }
//         else if (c == '(')
//         {
//             operators.push(c);
//         }
//         else if (c == ')')
//         {
//             while (!operators.empty() && operators.top() != '(')
//             {
//                 postfix += operators.top();
//                 operators.pop();
//             }
//             operators.pop();
//         }
//         else if (isOpeator(c))
//         {
//             while (!operators.empty() && getPrencedence(operators.top()) >= getPrencedence(c))
//             {
//                 postfix += operators.top();
//                 operators.pop();
//             }
//             operators.push(c);
//         }
//     }
//
//     while (!operators.empty())
//     {
//         postfix += operators.top();
//         operators.pop();
//     }
//
//     return postfix;
// }
//
// int main()
// {
//     std::string infix = "A + B * (C - D)";
//     std::string postfix = infixToPostfix(infix);
//
//     std::cout << "中缀表达式: " << infix << std::endl;
//     std::cout << "后缀表达式: " << postfix << std::endl;
//
//     return 0;
// }
