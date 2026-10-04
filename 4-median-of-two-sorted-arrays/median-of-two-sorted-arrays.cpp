class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        if (nums1.size() > nums2.size())
            swap(nums1, nums2);

        int low = 0;
        int high = nums1.size();

        int total = nums1.size() + nums2.size();
        int half = total / 2;

        while (low <= high) {

            int mid = (low + high) / 2;
            int partition2 = half - mid;

            int left1, right1, left2, right2;

            if (mid == 0)
                left1 = INT_MIN;
            else
                left1 = nums1[mid - 1];

            if (mid == nums1.size())
                right1 = INT_MAX;
            else
                right1 = nums1[mid];

            if (partition2 == 0)
                left2 = INT_MIN;
            else
                left2 = nums2[partition2 - 1];

            if (partition2 == nums2.size())
                right2 = INT_MAX;
            else
                right2 = nums2[partition2];

            if (left1 <= right2 && left2 <= right1) {

                if (total % 2 == 1) {
                    return min(right1, right2);
                }
                else {
                    return (max(left1, left2) +
                            min(right1, right2)) / 2.0;
                }
            }

            else if (left1 > right2) {
                high = mid - 1;
            }

            else {
                low = mid + 1;
            }
        }

        return 0.0;
    }
};