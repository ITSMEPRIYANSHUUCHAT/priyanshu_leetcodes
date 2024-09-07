class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mppst;
        map<char,char> mppts;
        if(s.length()!=t.length())
        return false;
        for(int i=0;i<s.length();i++)
        {
            char c1=s[i];
            char c2=t[i];
            if(mppst.find(c1)!=mppst.end()&& mppst[c1]!=c2)return false;
             else if(mppts.find(c2)!=mppts.end()&& mppts[c2]!=c1)return false;
            else{
                mppst[c1]=c2;
                mppts[c2]=c1;
            }
        }
        return true;
    }
};