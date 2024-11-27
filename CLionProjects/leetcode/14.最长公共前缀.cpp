// //
// // Created by murane on 24-11-20.
// //
// #include<bits/stdc++.h>
//
// using namespace std;
//
// class Solution
// {
// public:
//     string longestCommonPrefix(vector<string>& strs)
//     {
//         string ans=strs[0];
//         if(ans.empty())return "";
//         for(int i=1;i<strs.size();++i)
//         {
//             int j=0;
//             while(j<ans.size()&&j<strs[i].size()&&ans[j]==strs[i][j]) ++j;
//             ans=ans.substr(0,j);
//         }
//         return ans;
//     }
// };
