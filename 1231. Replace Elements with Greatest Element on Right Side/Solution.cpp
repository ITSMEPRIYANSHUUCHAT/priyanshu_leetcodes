class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size()-1);
        int maxi = -1;
        for (int i = arr.size() - 1; i >= 1; i--) {
            maxi = max(maxi, arr[i]);
            ans[i-1]=maxi;
        }
        ans.push_back(-1);
        return ans;
    }
};