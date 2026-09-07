class Solution {
public:
    int mySqrt(int x) { 
        if (x==0) return 0;
        if (x==1) return 1;
        long long low = 1;
        long long high = x / 2;
        int ans = 0;

        while (low <= high) {
            long long mid = (low + high) / 2;

            if (mid * mid <= x) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};