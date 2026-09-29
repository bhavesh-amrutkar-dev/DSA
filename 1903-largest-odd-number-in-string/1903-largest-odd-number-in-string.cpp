class Solution {
public:
    string largestOddNumber(string num) {
        int i = 0;
        while (i < num.length() && num[i] == '0') {
            i++;
        }
        string str = num.substr(i);
        for (int i = str.length() - 1; i >= 0; i--) {
            if (str[i] % 2 != 0) {
                return str;
            }
            str.pop_back();
        }
        return str;
    }
};