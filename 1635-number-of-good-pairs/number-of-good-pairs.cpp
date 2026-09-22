class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i=0;
        int count=0;
        while(i<nums.size()){
            int j=i+1; 
            while (i<j && j<nums.size()){
                if(nums[i]==nums[j]) count++;
                j++;
            }
            i++;
        }
        return count;
    }
};