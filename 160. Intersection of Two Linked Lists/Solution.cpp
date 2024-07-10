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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        ListNode* temp = headA;
        ListNode* temp2 = headB;
        map<ListNode*, int> mpp;
        ListNode* ans = nullptr;
        int cnt = 0;
        int flag = 0;
        int flag2 = 0;
        while (temp2 != nullptr || temp != nullptr) {
            cout << temp << " " << temp2 << endl;

            if (flag == 1) {
                cout<<"gotwowa"<<endl;
                goto label1;
            } else if ( mpp[temp] +1> 1  && temp!=0) {
                {
                    ans = temp;
                    break;
                }
            } else {
                mpp[temp]++;
                //   cout << "adding tempwa " << temp->val << endl;
                cout << "countwa " << mpp[temp ] << endl;
            }
            label1:
            if (flag2 == 1) {
                goto checkers;
            } else if ( mpp[temp2]+1 > 1 && temp2!=0) {

                ans = temp2;
                break;

            } else {
                mpp[temp2]++;
               //  cout << "adding temp2wa " << temp2->val << endl;
                cout << "count2wa " << mpp[temp2]<< endl;
            }
            if (temp2 != nullptr) {
                temp2 = temp2->next;

            } else  {
                flag2 = 1;
                cout<<"flag2"<<endl;
              
            }
            checkers:
            if (temp != nullptr) {
                temp = temp->next;

            } else    {
               
                flag = 1;
                cout<<"flag"<<endl;
            }
        }   


        return ans;
    }
};