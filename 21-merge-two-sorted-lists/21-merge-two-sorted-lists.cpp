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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *temp1 = list1;
        ListNode *temp2 = list2;
        ListNode *sol =  new ListNode(0);
        ListNode *k = sol;
        int flag = 0;
        if(temp1 == NULL && temp2==NULL)
        {
            return NULL;
        }
        else if(temp1==NULL)
        {
            return temp2;
        }
        else if(temp2 == NULL)
        {
            return temp1;
        }
    
        
        while((temp1 != NULL) && (temp2 !=NULL))
        {
           
            if(temp1->val >= temp2->val)
            {
                sol->next = temp2;
                temp2 = temp2->next;
                sol = sol->next;
            }
            else
            {
                sol->next = temp1;
                temp1 = temp1->next;
                sol = sol->next;
            }
            
        }
        
         while(temp1 != NULL)
        {
            sol->next = temp1;
            temp1 = temp1->next;
             sol = sol->next;
        }
        
         while(temp2 != NULL)
        {
            sol->next = temp2;
            temp2 = temp2->next;
             sol = sol->next;
        }
        
        
        return k->next;
    }
};