#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        int freq[26] = {0};

        // Count frequency of each character
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        int maxFreq = 0;
        char result = 'a';

        // Find max occurring character
        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                result = char(i + 'a');
            }
        }

        return result;
    }
};