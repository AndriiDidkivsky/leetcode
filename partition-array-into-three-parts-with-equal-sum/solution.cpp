#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int total = 0;
        
        for(int num: A) {
            total += num;
        }


        if(total % 3 != 0) {
            return false;
        }

        int targetSum = total / 3;
        int cases = 0;
        int reducer = 0;

        for(int num: A) {
            reducer += num;
            if(reducer == targetSum) {
                cases++;
                reducer = 0;
            }
        }

        return cases >= 3;
    }
};
