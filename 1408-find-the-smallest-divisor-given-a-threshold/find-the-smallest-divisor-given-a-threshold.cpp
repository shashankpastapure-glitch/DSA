class Solution {
public:
    vector<int> divide(vector<int>& nums,int k) {
        vector<int> ans(nums.size());
        for (int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                ans[i]=nums[i]/k;
            }
            else {
                ans[i]=(nums[i]/k)+1;
            }
        }
        return ans;
    }   

    int suming(vector<int>&nums){
        long long sum=0;
        for (int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int a;
        while(low<=high){
            int mid= low+ ((high-low)/2);
            vector<int> ans=divide(nums,mid);
            if(suming(ans)>threshold){
                low=mid+1;
            }    
            else {
                a=mid;
                high=mid-1;
            }
        }
        return a;
    }
};