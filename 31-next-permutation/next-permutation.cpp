class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size()==1) return;
        int i=nums.size()-2;
        int j = nums.size()-1;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        if (i == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        while (nums[j] <= nums[i]) {
            j--;
        }
        swap(nums[i],nums[j]);
        reverse(nums.begin() + i + 1, nums.end());
        return;
    }
};