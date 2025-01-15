#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int setBits = __builtin_popcount(num2);  

        int bit = 31;  
        int res = 0;

        while (bit >= 0 && setBits > 0) {
            if ((num1 & (1 << bit)) != 0) {
                res |= (1 << bit);
                setBits--;
            }
            bit--;
        }

        bit = 0;  

        while (setBits > 0 && bit < 32) {
            if ((num1 & (1 << bit)) == 0) {
                res |= (1 << bit);
                setBits--;
            }
            bit++;
        }

        return res;
    }
};
