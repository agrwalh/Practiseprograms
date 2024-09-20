class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs = 0, ms = INT_MIN;  
        for (int val : nums) {
            cs += val;
            ms = max(ms, cs); 
            if (cs < 0) {
                cs = 0;  
            }
        }
        return ms;
    }
};
