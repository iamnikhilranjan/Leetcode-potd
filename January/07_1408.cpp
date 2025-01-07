#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        set<string> uniqueAns;  
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && words[i].find(words[j]) != string::npos) {
                    uniqueAns.insert(words[j]);  // Insert into set
                }
            }
        }
        
        // Convert set to vector
        return vector<string>(uniqueAns.begin(), uniqueAns.end());
    }
};
