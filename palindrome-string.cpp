#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) 
    {
        //cout<<s;
         int j=s.length()-1; auto i = 0;
         while(i<j)
         {
             if(!isalnum(s[i])) i++;
             else if(!isalnum(s[j])) j--;
             else
             {
                 if(tolower(s[i++])!=tolower(s[j--]))
                     return false;
             }
         }
             return true;
    }
};


int main()
{
	Solution sol;
	cout<<(sol.isPalindrome("Stop! nine myriad murmur. Put up rum rum dairymen in pots.")?"true":"false");
	return 0;
}
