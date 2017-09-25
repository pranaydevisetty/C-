//**
  //Definition for singly-linked list.
  #include<iostream>
  using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 //*/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* inode = head;
        ListNode *n;
        while(inode!=NULL&&inode->next!=NULL)
        {
            if(inode->val==(inode->next)->val)
            {
                n = inode->next;
                inode->next = inode->next->next;
                delete n;
            }
            else
            {
                inode = inode->next;
            }
        }
        
        return head;
    }
};
int main()
{
	Solution sol;
	ListNode* head=new ListNode(1);
	head->next = new ListNode(1);
	head->next->next = new ListNode(2);
	ListNode* p=head;
	p = sol.deleteDuplicates(head);
	while(p!=NULL)
	{
		cout<<p->val<<"->";
		p=p->next;
	}
	return 0;
}
