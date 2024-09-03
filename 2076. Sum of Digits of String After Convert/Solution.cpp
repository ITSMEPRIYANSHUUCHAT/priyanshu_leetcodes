class Solution {
public:
    int getLucky(string s, int k) {
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            ans += to_string(s[i] - 96);
        }
        cout << ans << endl;

        int ansfinal = 0;

        while (k--) {
            ansfinal=0;
            for (int i = 0; i < ans.length(); i++) {
                
                ansfinal += ans[i] - 48;
            }
            cout<<ansfinal<<endl;
            ans = to_string(ansfinal);
        }
        return ansfinal;
    }
};