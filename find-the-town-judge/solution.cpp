#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<bool> trustees(N, true);
        vector<int> trusteds(N, 0);

        int trusted, trustee; 
        for(int i = 0; i < trust.size(); i++) {
            trustee = trust[i][0] - 1;
            trusted = trust[i][1] - 1;

            trusteds[trusted]++;
            trustees[trustee] = false;
        }

        for(int i = 0; i < N; i++) {
            if(trustees[i] && trusteds[i] == N - 1) {
                return i + i;
            }
        
        }
        return -1;
    }
};
