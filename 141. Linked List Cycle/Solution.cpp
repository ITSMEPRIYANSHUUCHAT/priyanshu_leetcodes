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
    bool hasCycle(ListNode *head) {
//hashing appraoch
    map<ListNode *,int> mpp;
    ListNode* temp=head;
    while(temp!=NULL)
    {
    if(mpp[temp]+1==2)
    {
        return true;
    }
    else mpp[temp]++; 
    temp=temp->next;
    }
    return false;

        }

     
};