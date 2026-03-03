class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;   // write pointer
        int i = 0;       // read pointer
        
        while (i < n) {
            char current = chars[i];
            int count = 0;
            
            // Count occurrences of current character
            while (i < n && chars[i] == current) {
                i++;
                count++;
            }
            
            // Write the character
            chars[index++] = current;
            
            // If count > 1, write digits of count
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[index++] = c;
                }
            }
        }
        
        return index;
    }
};