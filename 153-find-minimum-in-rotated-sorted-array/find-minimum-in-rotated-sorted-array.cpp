class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mini=nums[0];
        while(low<=high){
            int mid= (low+high)/2;
            
            if (nums[high] < nums[mid]){
                mini=min(nums[mid],mini);
                low=mid+1;
            }
            else  {
                mini=min(nums[mid],mini);
                high=mid-1;
            }

        }
        return mini;
    }
};