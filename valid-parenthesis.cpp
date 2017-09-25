#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) 
    {
        if(s.length()%2!=0) return false;
        stack<char> stk;
        int c=0;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                c++;
                stk.push(s[i]);
            }
            if(s[i]==')'||s[i]==']'||s[i]=='}')
            {
                c--;
                if(!stk.empty())
                {
                    if(stk.top()=='('&&s[i]==')')
                    {
                        stk.pop();
                        continue;
                    }
                    else if(stk.top()=='['&&s[i]==']')
                    {
                        stk.pop();
                        continue;
                    }
                    else if(stk.top()=='{'&&s[i]=='}')
                    {
                        stk.pop();
                        continue;
                    }
                }
                return false;
            }
        }
        if(c!=0)
            return false;
        return true;
    } 
};
int main()
{
	Solution sol;
	cout<<"valid: "<<(sol.isValid("{()[]")?"true":"false")<<endl;
	return 0;
}
