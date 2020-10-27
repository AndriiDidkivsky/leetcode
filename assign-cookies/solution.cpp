#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gp = 0;
        int sp = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while (gp < g.size() && sp < s.size()) {
            if(g[gp] <= s[sp]) {
                gp++;
            }
            sp++;
        }

        return gp;
    }
};
