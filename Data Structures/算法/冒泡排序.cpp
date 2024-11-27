// //
// // Created by murane on 24-11-14.
// //
// #include <bits/stdc++.h>
//
// using namespace std;
//
// void bubbleSort(vector<int>& vec)
// {
//     int size=vec.size();
//     bool swapped=false;
//     for(int i=0;i<size-1;++i)
//     {
//         swapped=false;
//         for(int j=0;j<size-i-1;++j)
//         {
//             if(vec[j]>vec[j+1])
//             {
//                 swap(vec[j],vec[j+1]);
//                 swapped=true;
//             }
//         }
//         if(!swapped)
//         {
//             break;
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
//     bubbleSort(data);
//     cout << "排序之后的数据: ";
//     for (const auto& item : data)
//     {
//         cout << item << " ";
//     }
//     cout << endl;
//     return 0;
// }