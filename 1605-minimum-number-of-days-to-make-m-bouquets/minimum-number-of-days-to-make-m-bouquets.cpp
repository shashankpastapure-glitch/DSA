class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m*k>bloomDay.size()) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        while(low<=high){
            int mid = low + (high - low) / 2;
            int count=0;
            int contibloomed=0;
            for(int i=0;i<bloomDay.size();i++){
                if(bloomDay[i]<=mid){
                    count++;
                }
                else {
                    contibloomed += count/k;
                    count=0;
                }
            }
            contibloomed += count / k;

            if (contibloomed < m){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};