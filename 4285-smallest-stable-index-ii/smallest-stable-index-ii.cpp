class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0)
            return -1;

        vector<int> min_val(n);
        min_val[n-1]=nums[n-1];

        for (int i = n - 2; i >= 0; i--) {
            min_val[i] = min(nums[i], min_val[i + 1]);
        }    
        
        int max_val = nums[0];
        for (int i = 0; i < n; i++) {
            max_val = max(max_val, nums[i]);

            if ((long long)max_val - min_val[i] <= k) {
                return i;
            }
        }
        return -1;    
        

            
    }
};