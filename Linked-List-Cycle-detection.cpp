//Cycle-Detection-in-a-LinkedList
// Definition for singly-linked list.
#include<iostream>
using namespace std;
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    bool hasCycle(ListNode *head)
    {
        ListNode*sptr = head;
        ListNode*fptr = head;
        while(fptr!=NULL&&fptr->next!=NULL)
        {
            sptr = sptr->next;
            fptr = fptr->next->next;
            if(sptr==fptr)
                return true;
        }
        return false;
    }
};

int main()
{
	ListNode *node = new ListNode(1);
	node->next = node;
	Solution sol;
	cout<< (sol.hasCycle(node)?"true":"false");
	return 0;
}
