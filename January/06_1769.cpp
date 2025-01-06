// 1769. Minimum Number of Operations to Move All Balls to Each Box
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector <int> ans;
        int cnt = 0;
        for(int i = 0 ; i <= n-1 ; i++ ) {
            for(int j = 0; j <= n-1 ; j++) {
                if( i == j ) continue;
                int num = boxes[j] - '0';
                cnt += num*(abs(i - j));
            }
            ans.push_back(cnt);
            cnt = 0;
        }
        return ans;
    }
};

// TC - O(n^2)