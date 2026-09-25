class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        int initialVal = x;
        long int revNum = 0;
        while (x > 0) {
            revNum = (revNum * 10) + (x % 10);
            x /= 10;
        }
        return (initialVal == revNum);
    }
};