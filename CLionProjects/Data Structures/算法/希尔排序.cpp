// //
// // Created by murane on 24-11-15.
// //
// #include<bits/stdc++.h>
//
// using namespace std;
//
// void shellSort(vector<int>& vec)
// {
//     int size=vec.size();
//     for(int gap=size/2;gap>0;gap/=2)
//     {
//         for(int i=gap;i<size;++i)
//         {
//             int temp=vec[i];
//             int j=i-gap;
//             while(j>=0&&vec[j]>temp)
//             {
//                 vec[j+gap]=vec[j];
//                 j-=gap;
//             }
//             vec[j+gap]=temp;
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
//     shellSort(data);
//     cout << "排序之后的数据: ";
//     for (const auto& item : data)
//     {
//         cout << item << " ";
//     }
//     cout << endl;
//     return 0;
// }