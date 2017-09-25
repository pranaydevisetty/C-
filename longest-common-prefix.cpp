#include<iostream>
#include<vector>
#include<string.h>

using namespace std;
class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string s; int i;
        if(strs.size()==0)
        {
             s = ""; return s;
        }
        s = *strs.begin();
        char *s1 = new char[s.length()+1];
        for(auto it=strs.begin()+1;it!=strs.end();it++)
        {
            auto itl = (*it).begin();
            i = 0;
            for(auto its = s.begin();its!=s.end();its++,itl++)
            {
                
                if(*its == *itl)
                {
                    s1[i]=*its;
                    i++;
                    continue;
                }
                     break;
            }
            s1[i] = '\0';
            s = s1;
            s1 = new char[s.length()+1];
        }
    return s;
    }
};

int main()
{
	Solution sol;
	vector<std::string> vecstr{"aas","aasss","aasss"};
	cout<<sol.longestCommonPrefix(vecstr);
	return 0;
}
