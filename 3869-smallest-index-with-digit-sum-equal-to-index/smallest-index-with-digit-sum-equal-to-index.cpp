class Solution {
public:
    int sumofdigit(int num){
        int temp =num;
        int sum=0;
        while (temp!=0){
            sum += temp%10;
            temp=temp/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for (int i=0;i<nums.size();i++){
            if(i==sumofdigit(nums[i])){
                return i;
                break;
            }
        }
        return -1;
    }
};