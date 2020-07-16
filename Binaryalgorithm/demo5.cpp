/*
 implement an algorithm to find the Kth to last element of a singly linked list.
 Return the value of the element.
 Note: this problem is slightly different form original one in the book.
*/


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
    int kthToLast(ListNode* head, int k) {
        if(head == nullptr)           
            return 0;
        ListNode *pre = head;      
        ListNode *p = head;           
        int i = 0;              
        while(i < k){
            if(p == nullptr)       
                return 0;
            p = p->next;
            i++;
        }
        while(p != nullptr){       
            pre = pre->next;
            p = p->next;
        }
        return pre->val;
    }
};
