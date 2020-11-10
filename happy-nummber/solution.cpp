#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, bool> map;
        int cur = n;
        while (cur != 1 && map.find(cur) == map.end()) {
            map.insert({cur, true});
            cur = sqSum(cur);
        }
        
        return cur == 1;

    }

    int sqSum(int n) {
        if(n == 0 || n == 1) {
            return n;
        }
        int temp = n % 10;
        return temp * temp + sqSum(n / 10);
    }
};