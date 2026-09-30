class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for (int i=0;i<weights.size();i++){
            high += weights[i];
        }
        while(low<=high){
            int mid = low +((high-low)/2);
            int count=1;
            int sum=0;
            for (int j=0;j<weights.size();j++){
                sum+= weights[j];
                if (sum>mid){
                    sum=weights[j];
                    count++;
                }
            }    
            if (count>days){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};