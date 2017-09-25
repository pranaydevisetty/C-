// Given an array of integers, every element appears twice except for one. Find that single one.
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n = 0;
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            n = n^*it;
        }
        return n;
    }
};

int main()
{
	Solution sol;
	vector<int> numbers = {1,1,2,2,4,3,5,3,4};
	cout<<sol.singleNumber(numbers);
	return 0;
}

