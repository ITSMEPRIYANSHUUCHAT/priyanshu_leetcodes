class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        for(auto it:nums)
        {
            if(mpp[it]>0)
            return true;
            else
            mpp[it]++;
        }
        return false ;
    }
};