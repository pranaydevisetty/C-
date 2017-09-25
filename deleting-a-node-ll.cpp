//Deleting a node in a Linked-List
//Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
//Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.
// Definition for singly-linked list.
#include<iostream>
using namespace std;
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
class Solution 
{
public:
    void deleteNode(ListNode* node) 
    {
        if(node->next!=NULL)
        {
               node->val = node->next->val;
               ListNode* del = node->next;
               node->next = node->next->next;
                delete del;
    	}
               
    }
};
int main()
{
	ListNode *node = new ListNode(1);
	node->next = new ListNode(2);
	node->next->next = new ListNode(3);
	Solution sol;
	sol.deleteNode(node->next);
	while(node!=NULL)
	{
		cout<<node->val<<"->";
		node = node->next;
	}
	return 0;
}
