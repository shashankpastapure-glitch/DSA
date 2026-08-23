class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if (nums.empty()) return {};
        int min_val = *min_element(nums.begin(), nums.end());
        int max_val = *max_element(nums.begin(), nums.end());
        vector<int> hash(max_val - min_val + 1, 0);

        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i] - min_val] = 1;
        }

        vector<int> missing;

        for (int i = min_val; i <= max_val; i++) {
            if (hash[i - min_val] == 0) {
                missing.push_back(i);
            }
        }

    return missing;
    }
};