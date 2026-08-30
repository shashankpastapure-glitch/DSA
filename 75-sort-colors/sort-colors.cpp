class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int i=0;i<nums.size()-1;i++){
            int j=i+1;
            while (j<nums.size()){
                if (nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                }
                j++;
            }
        }  
    }
};