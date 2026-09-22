class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int a=10;
            int b=1;
            while (nums[i]/a!=0){
                b+=1;
                a*=10;
            }
            if(b%2==0) count++;
        }
        return count;
    }
};