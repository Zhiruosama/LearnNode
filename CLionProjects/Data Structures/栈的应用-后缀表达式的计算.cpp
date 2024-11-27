// //
// // Created by murane on 24-11-13.
// //
// //后缀表达式的计算逻辑是
// //从左到右扫描后缀表达式
// //遇到操作数的时候，将其压入栈中
// //遇到操作符时，弹出栈顶的两个操作数，进行相应的计算
// //重复上述步骤，直到表达式扫描完毕
// //栈顶元素即为表达式的结果
// #include<bits/stdc++.h>
//
// using namespace std;
//
// bool isOperator(const string& token)
// {
//     return token=="+"||token=="-"||token=="*"||token=="/";
// }
//
// int performOperation(const string& operation,int operand1,int operand2)
// {
//     if(operation=="+")return operand1+operand2;
//     if(operation=="-")return operand1-operand2;
//     if(operation=="*")return operand1*operand2;
//     if(operation=="/")return operand1/operand2;
//     throw std::invalid_argument("Invalid operator");
// }
//
// int evaluatePostfix(const string& expression)
// {
//     stack<int> s;
//     istringstream iss(expression);
//     string token;
//
//     while(iss>>token)
//     {
//         if(isOperator(token))
//         {
//             int operand2=s.top();
//             s.pop();
//             int operand1=s.top();
//             s.pop();
//             int result=performOperation(token,operand1,operand2);
//             s.push(result);
//         }
//         else
//         {
//             s.push(stoi(token));
//         }
//     }
//     return s.top();
// }
//
// int main()
// {
//     string expression = "3 4 + 2 * 7 /";
//     int result = evaluatePostfix(expression);
//     cout << "后缀表达式的计算结果是: " << result << endl;
//     return 0;
// }