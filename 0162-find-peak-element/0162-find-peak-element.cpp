class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        int ans;
        if (nums.size() == 1) {
            return nums.size() - 1;
        }
        if (nums.size() == 2) {
            if (nums[start] >= nums[end]) {
                return start;
            } else {
                return end;
            }
        }
        while (start < end) {
            if (mid == end || mid == start) {
                if (nums[start] >= nums[end]) {
                    ans = start;
                    break;
                } else {
                    ans = end;
                    break;
                }
            } else if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]) {
                ans = mid;
                break;
            } else if (nums[mid] < nums[mid + 1]) {
                start = mid;
            } else if (nums[mid] > nums[mid + 1]) {
                end = mid;
            }

            mid = start + (end - start) / 2;
        
    }
    return ans;
}
}
;