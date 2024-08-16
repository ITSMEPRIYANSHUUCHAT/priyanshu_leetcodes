class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        bool ans=false;
        for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]==nums[j]&& abs(i-j)<=k && i!=j)
            {
                ans=true;
                goto hell;
            }
            else if(abs(i-j)>k)
            break;
        }
    }
    hell:
    return ans;
    }
};