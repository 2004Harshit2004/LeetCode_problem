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

    // Time complexity=O(n)

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* hg = head;
        while(n){
            hg=hg->next;
            --n;
        }
        if(hg==NULL) return head->next;
        while(hg&&hg->next){
            hg=hg->next;
            temp=temp->next;
        }
        // if(temp->next) temp->next=temp->next->next;
        // else return temp->next;
         temp->next=temp->next->next;
        return head;
    }
};