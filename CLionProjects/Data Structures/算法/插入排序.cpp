// //
// // Created by murane on 24-11-14.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// void insertionSort(vector<int>& vec)
// {
//     int size = vec.size();
//     for (int i = 1; i < size; ++i)
//     {
//         int j = i - 1;
//         int key = vec[i];
//         while (j >= 0 && vec[j] > key)
//         {
//             vec[j + 1] = vec[j];
//             j--;
//         }
//         vec[j + 1] = key;
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
//     insertionSort(data);
//     cout << "排序之后的数据: ";
//     for (const auto& item : data)
//     {
//         cout << item << " ";
//     }
//     cout << endl;
//     return 0;
// }
