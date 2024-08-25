class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<char> vrr;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ' && vrr.empty()) {
                continue;
            } else if (s[i] == ' ' && vrr.empty() == false)
                break;
            else
                vrr.push_back(s[i]);
        }
        return vrr.size();
    }
};