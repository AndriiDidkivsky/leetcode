#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> result;
        unordered_map<string, int> table;
        int minIndexSum = INT32_MAX;


        for(int i = 0; i < list1.size(); i++) {
            table.insert({list1[i], i});
        }

        for(int i = 0; i < list2.size(); i++) {
            if(table.find(list2[i]) != table.end()) {
                int index = table[list2[i]];
                int sum = i + index;
                if(sum <= minIndexSum) {
                    if(sum < minIndexSum) {
                        minIndexSum = sum;
                        result.clear();
                    }
                    result.push_back(list2[i]);
                } 
            }
        }
        return result;
    }
};