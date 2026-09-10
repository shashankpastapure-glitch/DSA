class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long maxi = nums[0];
        for (int i=0;i<nums.size();i++){
            long long product=1;
            for(int j=i;j<nums.size();j++){
                product= product*nums[j];
                if (product > maxi){
                    maxi=product;
                }
            }
            
        }
        return maxi;
    }
};