//Given an array of size n, find the majority element. The majority element is the element that appears more than ? n/2 ? times.
///You may assume that the array is non-empty and the majority element always exist in the array.
#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        //sort(nums.begin(),nums.end());
        int n = nums[0]; int c = 1;
        for(auto it = nums.begin()+1;it!=nums.end();it++)
        {
          if(c == 0)
          {
              c++;
              n = *it;
          }
        else if(n==*it)
        {
            c++;
        }
        else c--;
            
        }
          return n;
    }
};

int main()
{
	vector<int> numbers = {1,3,1,3,1};
	Solution sol;
	cout << sol.majorityElement(numbers);
	return 0;
}
