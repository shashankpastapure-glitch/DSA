class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool> visited(nums.size() + 1, false);
        for (int i = 0; i < nums.size(); i++) {
            visited[nums[i]] = true;
        }

        for (int i = 0; i < nums.size() + 1; i++) {
            if (visited[i] == false) {
                return i;
            }
        }

    return -1;
    }
};