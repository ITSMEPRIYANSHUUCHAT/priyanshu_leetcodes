class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n, k;
        n = word1.length();
        k = word2.length();
        int maxi = max(n, k);
        int i=0;int j = 0;
        while (maxi--) {
            if (i < n && j < k) {
                ans += word1[i];
                ans += word2[j];

            } else if (i < n && j >= k) {
                ans += word1[i];

            } else if (j < k && i >= n) {
                ans += word2[j];
            } else
                return ans;
            i++;
            j++;
        }
        return ans;
    }
};