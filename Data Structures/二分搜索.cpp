// //
// // Created by murane on 24-11-14.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// int binarySearchRecursive(const vector<int>& arr, int left, int right, int target)
// {
//     if (left < right)
//     {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         if (arr[mid] > target)
//         {
//             return binarySearchRecursive(arr, left, mid - 1, target);
//         }
//         return binarySearchRecursive(arr, mid + 1, right, target);
//     }
//     return -1;
// }
//
// int main()
// {
//     vector<int> arr = {2, 3, 4, 10, 40};
//     int target = 10;
//     int result = binarySearchRecursive(arr, 0, arr.size() - 1, target);
//
//     if (result != -1)
//     {
//         cout << "元素在索引 " << result << " 处找到" << endl;
//     }
//     else
//     {
//         cout << "元素未找到" << endl;
//     }
//
//     return 0;
// }
