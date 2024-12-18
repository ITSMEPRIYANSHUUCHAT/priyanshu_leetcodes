class Solution {
public:
    bool isPalindromeRange(const string &s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            // Convert to lowercase for case-insensitive comparison
            char left = tolower(s[i]);
            char right = tolower(s[j]);

            if (left != right) {
                // Try skipping one character either from the left or the right
                return isPalindromeRange(s, i + 1, j) || isPalindromeRange(s, i, j - 1);
            }
            i++;
            j--;
        }
        return true;
    }
};
