#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int na = A.size();
        int nb = B.size();
        vector<int> ans(na);
        for(int i = 0 ; i < na ; i++) {
            int cnt = 0; 
            for(int j = 0 ; j <= i ; j++) {
               for(int k = 0; k <= i ; k++) {
                if(A[j] == B[k]) {
                    cnt++;
                    break;
                }
               }
            }

            ans[i]  = cnt;
        }
        return ans;
    }
};