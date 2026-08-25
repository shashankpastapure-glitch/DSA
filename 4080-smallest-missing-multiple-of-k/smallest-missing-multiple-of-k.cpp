class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i=1;
        int count=0;
        while( i<=nums.size()){
            for (int j=0;j<nums.size();j++){
                if (nums[j]!=(i*k)){
                    count+=1;
                }
            }
            if (count== nums.size()){
                break;
            }
            else{
                count=0;
                i++;
            }
        }
        return i*k;
        
    }
};