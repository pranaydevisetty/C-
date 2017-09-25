//Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.
//
//You may assume the integer do not contain any leading zero, except the number 0 itself.
//
//The digits are stored such that the most significant digit is at the head of the list.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        auto it = digits.end()-1;
        static int c=0;
        *it = *it+1;
        if(*it>9)
        {
            *it = *it%10;
            all_of(digits.rbegin()+1,digits.rend(),[](int &n){n=n+1;if(n>9){n=0;return true;}else return false;});
            if(*(digits.begin())==0)
            {
                  *(digits.begin())=1;
                    digits.push_back(0);
            }
        }
        return digits;
    }
};

int main()
{
	Solution sol;
	vector<int> dig{9,9,9};
	auto print = [](const int& n) { std::cout <<n<<" "; };
	sol.plusOne(dig);
	for_each(dig.begin(),dig.end(),print);
	return 0;
}



