#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        int freq[26] = {0};

        // Count frequency
        for(char ch : s) {
            freq[ch - 'a']++;
        }

        int maxFreq = 0;
        char ans = 'a';

        for(int i = 0; i < 26; i++) {
            if(freq[i] > maxFreq) {
                maxFreq = freq[i];
                ans = char(i + 'a');
            }
        }

        return ans;
    }
};