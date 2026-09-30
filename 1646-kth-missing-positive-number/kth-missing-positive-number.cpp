class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int temp=k;
        int num=0;
        for (int i=1;i<=arr[arr.size()-1];i++){
            if (num<arr.size()){
                if(arr[num]!=i){
                    temp-=1;
                }
                else{
                    num++;
                }
            }    
            if (temp==0){
                return i;
                break;
            }
        }
        return arr[arr.size()-1]+temp;
    }
};