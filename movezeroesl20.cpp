#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;  // Position for next non-zero element
        
        // Move non-zero elements forward
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[index] = nums[i];
                index++;
            }
        }
        
        // Fill remaining positions with 0
        while (index < nums.size()) {
            nums[index] = 0;
            index++;
        }
    }
};
