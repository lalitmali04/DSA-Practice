class Solution {
public:
    string removeOccurrences(string s, string part) {
        string result;
        
        for (char ch : s) {
            result += ch;
            
            // Check if the end of result matches 'part'
            if (result.size() >= part.size() &&
                result.substr(result.size() - part.size()) == part) {
                
                result.erase(result.size() - part.size());
            }
        }
        
        return result;
    }
};