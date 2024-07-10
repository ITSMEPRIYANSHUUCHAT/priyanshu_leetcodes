class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt=0;
        stack<string> stacker;
        int n=logs.size() ;
        for(int i=0;i<n;i++)
        {
            if(logs[i]=="../")
            {
                if(!stacker.empty())
                {
                    stacker.pop();
                }
                continue;
            }
            else if(logs[i]=="./")
            {
                continue;
            }
            else{
                stacker.push(logs[i]);
            }


        }
        while(!stacker.empty())
        {
            cnt++;
            stacker.pop();
        }
        return cnt;
    }
};