class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm=prices[0];
        int profit=0;
        int maxm=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minm) minm=prices[i];
            profit=prices[i]-minm;
            maxm=max(maxm,profit);
        }

        return maxm;
    }
};