#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        
        // Brute Force :- TLE
        // for( int i = 0; i < shifts.size(); i++) {
        //         if(shifts[i][2] == 1 ) { // case for forward rotation
        //             for(int k = shifts[i][0]; k <= shifts[i][1]; k++) {
        //                 if(s[k] == 'z') s[k] = 'a';
        //                 else s[k] = s[k] + 1;
        //             }
        //         }
        //         if(shifts[i][2] == 0 ) { // case for backward rotation
        //             for(int k = shifts[i][0]; k <= shifts[i][1]; k++) {
        //                 if(s[k] == 'a') s[k] = 'z';
        //                 else s[k] = s[k] - 1;
        //             }
        //         }
        // }
        // return s;
        
        vector<int> diff(s.size() + 1, 0);  

        for (int i = 0; i < shifts.size(); i++) {
        int start = shifts[i][0];
        int end = shifts[i][1];
        int direction = shifts[i][2];

            if (direction == 1) {
                diff[start] += 1;         // Forward shift
                diff[end + 1] -= 1;
            } else {
                diff[start] -= 1;         // Backward shift
                diff[end + 1] += 1;
            }
        }

        // Calculate the cumulative shift
        int cumulativeShift = 0;
        for (int i = 0; i < s.size(); i++) {
            cumulativeShift += diff[i];
            cumulativeShift = (cumulativeShift % 26 + 26) % 26;  // Handle negative shifts

            s[i] = 'a' + (s[i] - 'a' + cumulativeShift) % 26;
        }

        return s;


    }
};