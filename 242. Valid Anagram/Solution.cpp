class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mpp;
        for(auto it:s)
        {
            mpp[it]++;
        }
        for(auto it:t)
        {
           if(mpp[it]>0)
           mpp[it]--;
           else return false;
        }
        for(auto it:mpp)
        {
            if(it.second>0)
            return false;
        }
        return true;
    }
};