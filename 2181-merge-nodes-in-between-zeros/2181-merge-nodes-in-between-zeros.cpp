/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* temp = head;
        ListNode *sol = NULL, *temp2 = NULL;
        int sum = 0;
        int flag = 0;
        
        while(temp != NULL)
        {
            sum += temp->val;
            if(temp->val ==0 && temp != head)
            {
                ListNode *l = new ListNode(sum);
                if(flag==0)
                {
                    temp2 = l;
                    sol = temp2;
                    flag = 1;
                    sum = 0;
                }
                else
                {
                temp2->next = l;
                temp2 = l;
                sum = 0;
                }
            }
            
            
            temp = temp->next;
            
        }
        
        return sol;
        
    }
};