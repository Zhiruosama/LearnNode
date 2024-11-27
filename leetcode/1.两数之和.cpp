//
// Created by murane on 24-11-4.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> num = nums;
        for(int i=0;i<num.size();++i)
        {
            for(int j=i+1;j<num.size();++j)
            {
                if((num[i]+num[j])==target)
                    return vector<int>{i,j};
            }
        }
        return vector<int>{};
        //记得返回没有找到相应数值时的默认值
        //即空值
    }
};