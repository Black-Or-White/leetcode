/** 
 * Definition for singly-linked list. 
 * struct ListNode { 
 *     int val; 
 *     ListNode *next; 
 *     ListNode(int x) : val(x), next(NULL) {} 
 * }; 
 */  
class Solution {  
public:  
    ListNode* removeNthFromEnd(ListNode* head, int n) {  
        ListNode* tmp = head;  
        ListNode** tmp2 = &head;  
        for(int i = 1; i < n; ++i){  
            tmp = tmp->next;  
        }  
        while(tmp->next != NULL){  
            tmp2 = &((*tmp2)->next);  
            tmp = tmp->next;  
        }  
        *tmp2 = (*tmp2)->next;  
        return head;  
    }  
};  
