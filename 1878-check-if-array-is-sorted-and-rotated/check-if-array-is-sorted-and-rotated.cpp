class Solution {
public:
    bool check(vector<int>& nums) {
        int a=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]>nums[(i+1)%nums.size()]){
                a+=1;
            }
        }
        if (a<=1) return true;
        return false;
    }
};