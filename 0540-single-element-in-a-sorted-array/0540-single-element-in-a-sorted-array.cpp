class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e) {
            if (mid % 2 != 0) {
                mid--;
            }

            if (nums[mid] == nums[mid + 1]) {
                s = mid + 2;
            } else {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return nums[s];
    }
};