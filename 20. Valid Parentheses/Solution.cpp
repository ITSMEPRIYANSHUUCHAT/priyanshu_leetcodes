#include<stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> sttr;
        if(s.length()==0||s.length()==1)return false;
       for(int i=0;i<s.length();i++)
       {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
        {

        sttr.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(sttr.empty()!= true  && sttr.top()=='(')
            {
                sttr.pop();
            }

            else{
                return false;
            }
        }
        else if(s[i]=='}')
        {
            if(sttr.empty()!= true  && sttr.top()=='{')
            {
                sttr.pop();
            }

            else{
                return false;
            }
        }
        else if(s[i]==']')
        {
            if(sttr.empty()!= true  && sttr.top()=='[')
            {
                sttr.pop();
            }

            else{
                return false;
            }
        }
        }
     if(sttr.empty()==false)return false;
        return true;
}
};