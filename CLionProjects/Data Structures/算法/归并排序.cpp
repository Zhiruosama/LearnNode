// //
// // Created by murane on 24-11-15.
// //
// #include<bits/stdc++.h>
//
// using namespace std;
//
// void mergeSort(vector<int>& vec, int left, int right)
// {
//     if (left >= right)
//     {
//         return;
//     }
//     int mid = (left + right) / 2;
//     mergeSort(vec, left, mid);
//     mergeSort(vec, mid + 1, right);
//
//     int k = 0;
//     int i = left, j = mid + 1;
//     vector<int> tmp;
//     while (i <= mid && j <= right)
//     {
//         if (vec[i] <= vec[j])
//         {
//             tmp.push_back(vec[i++]);
//         }
//         else
//         {
//             tmp.push_back(vec[j++]);
//         }
//     }
//     while (i <= mid)
//     {
//         tmp.push_back(vec[i++]);
//     }
//     while (j <= right)
//     {
//         tmp.push_back(vec[j++]);
//     }
//     for (i = left, k = 0; i <= right; ++i)
//     {
//         vec[i] = tmp[k++];
//     }
// }
//
// int main()
// {
//     srand(time(NULL));
//     vector<int> data;
//     cout << "排序前的原始数据: ";
//     for (int i = 0; i < 10; ++i)
//     {
//         data.push_back(rand() % 100);
//         cout << data.back() << " ";
//     }
//     cout << endl;
//     mergeSort(data, 0, data.size() - 1);
//     cout << "排序之后的数据: ";
//     for (const auto& item : data)
//     {
//         cout << item << " ";
//     }
//     cout << endl;
//     return 0;
// }
