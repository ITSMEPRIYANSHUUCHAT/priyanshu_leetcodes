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
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp=head;
        map<ListNode*,int>mpp;
        if(head==NULL||(head->next)==NULL)
        {return NULL;}
        while(temp!=NULL)
        {
            if(mpp[temp] ==1)
            {
                return temp;
            }
            else{ mpp[temp]++;}
            temp=temp->next;
        }
        return NULL;
    }
};