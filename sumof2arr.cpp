#include <bits/stdc++.h> 
using namespace std;

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    
    int i = n - 1;   // Pointer for array a
    int j = m - 1;   // Pointer for array b
    int carry = 0;
    
    vector<int> ans;
    
    // Add digits from right to left
    while (i >= 0 || j >= 0 || carry) {
        
        int sum = carry;
        
        if (i >= 0) {
            sum += a[i];
            i--;
        }
        
        if (j >= 0) {
            sum += b[j];
            j--;
        }
        
        ans.push_back(sum % 10);  // Store last digit
        carry = sum / 10;         // Update carry
    }
    
    // Reverse the result since we added from LSB to MSB
    reverse(ans.begin(), ans.end());
    
    return ans;
}