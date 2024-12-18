class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i <= j) {
            if (s[i] >= 65 && s[i] <= 90) {
                s[i] += 32;
            }
            if (s[j] >= 65 && s[j] <= 90) {
                s[j] += 32;
            }

            if (isalnum(s[i]) && isalnum(s[j])) {
                if (s[i] != s[j])
                    return false;
                else {
                    i++;
                    j--;
                }
            } else if (isalnum(s[i]) && !isalnum(s[j])) {
                j--;
            } else if (isalnum(s[j]) && !isalnum(s[i])) {
                i++;
            } else {
                i++;
                j--;
            }
        }
        return true;
    }
};