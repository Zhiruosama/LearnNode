// //
// // Created by murane on 24-11-13.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// int naivePatternMatch(const string text, const string pattern)
// {
//     int n = text.length();
//     int m = pattern.length();
//
//     for (int i = 0; i <= n - m; ++i)
//     {
//         int j;
//         for (j = 0; j < m; ++j)
//         {
//             if (text[i + j] != pattern[j])
//             {
//                 break;
//             }
//         }
//         if (j == m)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
//
// int main()
// {
//     std::string text = "da liang zheng zai mai dabing";
//     std::string pattern = "dabing";
//     int result = naivePatternMatch(text, pattern);
//
//     if (result != -1)
//     {
//         std::cout << "子串在索引 " << result << " 被处找到" << std::endl;
//     }
//     else
//     {
//         std::cout << "子串未被找到!" << std::endl;
//     }
//
//     return 0;
// }
