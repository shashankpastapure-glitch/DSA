class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        for (pair<int, int> p : freq) { 
            if (p.second == 1) {
                return p.first;
            }
        }
        return 0;
    }
};