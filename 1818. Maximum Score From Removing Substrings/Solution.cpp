class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st;
        stack<char>st1;
        long long int ans = 0;
        char c1 = 'a', c2 = 'b';
        if (x < y) {
            swap(c1, c2);
            swap(x, y);
        }

        for (int i = 0; i < s.size(); i++) {

            if (!st.empty()&&s[i] == c2 && st.top() == c1) {
                ans += x*1ll;
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        // cout<<ans<<endl;
        // while(!st.empty()){
        //     cout<<st.top();
        //     st.pop();
        // }
        while (!st.empty()) {
            // char temp = st.top();
            // st.pop();
            // if (!st.empty() && temp == c1 &&  st.top() == c2) {
            //     ans += y*1ll;
            //     st.pop();
            // }
            if (!st1.empty()&&st.top()== c2 && st1.top() == c1) {
                ans += y*1ll;
                st1.pop();
            } else {
                st1.push(st.top());
            }
            st.pop();
        }
        return ans;
    }
};