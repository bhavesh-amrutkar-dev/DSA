class Solution {
public:
    int bs(vector<int>& nums, int s, int e, int k) {
        int mid = s + (e - s) / 2;
        while (s <= e) {
            if (nums[mid] == k) {
                return mid;
            } else if (nums[mid] < k) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }
    int pivot(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e) {
            if (nums[mid] >= nums[0]) {
                s = mid + 1;
            } else {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
    int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int p = pivot(nums);
        if (nums[p] <= target && target <= nums[e]) {
            return bs(nums, p, e, target);
        } else {
            return bs(nums, s, p - 1, target);
        }
    }
};