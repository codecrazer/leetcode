/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
   
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* ans=new ListNode(0);
        ListNode* first=ans;
        ans->val=(l1->val+l2->val)%10;
        int temp=(l1->val+l2->val)/10;
        while(l1->next!=NULL||l2->next!=NULL||temp)
        {
            ListNode* nextnode=new ListNode(0);
            int c=0;
            if(l1->next!=NULL)
            {
                 l1=l1->next;
                 c=c+l1->val;
            }
            if(l2->next!=NULL)
            {
                 l2=l2->next;
                 c=c+l2->val;
            }
           
            nextnode->val=(c+temp)%10;
            ans->next=nextnode;
            ans=ans->next;
            temp=(c+temp)/10;
            
           
        }
       
        return first;
    }
};
