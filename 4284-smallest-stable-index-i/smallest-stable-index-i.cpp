class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size() ; i++) {

            int max_val = nums[0];
            int min_val = nums[i];

            for (int j = 0; j <= i; j++) {
                if (nums[j] > max_val) {
                    max_val = nums[j];
                }
            }

    
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] < min_val) {
                    min_val = nums[j];
                }
            }

            if ((max_val - min_val) <= k) {
                return i;
            }
        }

        return -1;
    }
};