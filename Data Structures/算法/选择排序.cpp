// //
// // Created by murane on 24-11-14.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// void selectionSort(vector<int>& vec)
// {
//     int size=vec.size();
//     for(int i=0;i<size-1;++i)
//     {
//         int minPos=i;
//         for(int j=i+1;j<size;++j)
//         {
//             if(vec[j]<vec[minPos])
//             {
//                 minPos=j;
//             }
//         }
//         if(minPos!=i)
//         {
//             swap(vec[i],vec[minPos]);
//         }
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
//     selectionSort(data);
//     cout << "排序之后的数据: ";
//     for (const auto& item : data)
//     {
//         cout << item << " ";
//     }
//     cout << endl;
//     return 0;
// }
