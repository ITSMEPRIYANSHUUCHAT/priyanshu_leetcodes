class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
      map<char,int>mpp;
      for(int i=0;i<allowed.length();i++)
      {
        mpp[allowed[i]]=0;
      }  
      int m=0;
      int x=0;
      for(int i=0;i<words.size();i++)
      {
        x=0;
        for(int j=0;j<words[i].length();j++)
        {
            if(mpp.find(words[i][j])!=mpp.end())
            {
           
            }
            else x=1;
        }
        if(x==1)continue;
        else m++;
        
      }
      return m;
   
    }
};