class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int high=matrix.size()-1;
        int row=0;
        while (low <= high) {
            int mid = (low + high) / 2;

            if (matrix[mid][0] > target) {
                high = mid - 1;
            }
            else {
                row = mid;
                low = mid + 1;
            }
        }
        int high2=matrix[0].size()-1;
        int low2=0;
        while(low2<=high2){
            int mid2= (low2+high2)/2;
            if (matrix[row][mid2]>target) high2=mid2-1;
            else if (matrix[row][mid2]<target) low2=mid2+1;
            else return true;
        }
    return false;
    }
};