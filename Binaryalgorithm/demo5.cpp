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
        {
            return 0;
        }
        int size = 0;
        ListNode *p = head;
        while(p)
        {
            size++;
            p = p->next;
        }
        if(k>size)
        {
            return 0;
        }
        size -= k;
        p = head;
        if(size == 0)
        {
            return head->val;
        }
        while(--size)
        {
            p = p->next;
        }
        return p->next->val;

    }
};
