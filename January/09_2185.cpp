#include <bits/stdc++.h>
using namespace std;

class Solution {

private:
    int hasPrefix(string &str, string &pref) {
        int it;

        for( it = 0; it < str.length() && it < pref.length(); it++) {
            if(str[it] != pref[it]) {
                return 0;
            }
        }

        if(it != pref.length()) {
            return 0;
        }
         return 1;
    }    

    
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for( string &word: words) {
            cnt += hasPrefix(word, pref);
        }
        return cnt;
    }
};