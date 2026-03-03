class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        
        vector<int> freq1(26, 0), freq2(26, 0);
        
        // Count frequency of s1
        for (char c : s1) {
            freq1[c - 'a']++;
        }
        
        int windowSize = s1.size();
        
        for (int i = 0; i < s2.size(); i++) {
            // Add current character to window
            freq2[s2[i] - 'a']++;
            
            // Remove character if window exceeds size
            if (i >= windowSize) {
                freq2[s2[i - windowSize] - 'a']--;
            }
            
            // Compare frequency arrays
            if (freq1 == freq2) {
                return true;
            }
        }
        
        return false;
    }
};