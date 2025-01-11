#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        if (k > s.size()) return false;

        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        int oddCount = 0;
        for (const auto &pair : freq) {
            if (pair.second % 2 != 0) {
                oddCount++;
            }
        }

        return oddCount <= k;
    }
};