//
//Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
//
//If the last word does not exist, return 0.
//
//Note: A word is defined as a character sequence consists of non-space characters only.
//
//For example, 
//Given s = "Hello World",
//return 5.
#include<iostream>
using namespace std;

class Solution 
{
public:
    int lengthOfLastWord(string s)
    {
        
        int c = 0,f=0;;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=' ')
               { c++; f=1;}
            if(s[i]==' '&&f==1)
                break;
        }
        return c;
    }
};

int main()
{
	Solution sol;
	cout<<sol.lengthOfLastWord("a ");
	return 0;
}
