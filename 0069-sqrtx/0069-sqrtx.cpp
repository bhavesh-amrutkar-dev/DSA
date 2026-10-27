class Solution {
public:
    int mySqrt(int x) {
      int s = 0;
      int e = x;
      int mid = s + (e-s)/2;
      int ans;
      long long int temp;
      while(s<=e){
        temp = 1LL * mid*mid;
        if(temp <= x){
            ans = mid;
            s=mid+1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
      }
      return ans;        
    }
};