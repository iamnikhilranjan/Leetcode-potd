#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
       int res = 0;
       for(int val : derived) {
        res = res ^ val;
       } 
       return (res == 0);
    }
};