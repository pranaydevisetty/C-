//Implement strStr().
//Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
#include<iostream>
#include<string>
using namespace std;
class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        int n = haystack.find(needle);
         return n;
    }
};

int main()
{
	Solution sol;
	cout<<sol.strStr("haystack needle","needle");
	return 0;
}
