#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        const int size = nums.size();
        vector<int> sum(size);
        int val = 0;

        for(int i =0; i < size; i ++) {
            val += nums[i];
            sum[i] = val;
        }
        
        return sum;
    }
};
