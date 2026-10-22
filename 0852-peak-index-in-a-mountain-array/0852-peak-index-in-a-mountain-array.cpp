class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int mid = start + (end - start)/2;
        int ans;
        while(start<end){
            if(arr[mid-1]< arr[mid] && arr[mid]> arr[mid+1]){
                ans =  mid;
                break;
            }
            else if(arr[mid]<arr[mid+1]){
                start = mid;
            }
            else if (arr[mid]>arr[mid+1]){
                end = mid;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
};