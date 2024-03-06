
class Solution {
public:

    // Time Complexity = O(n)
    // Space Complexity = O(1)

    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        while(temp && temp->next){
            temp=temp->next->next;
            head=head->next;
            if(temp==head) return true;
        }
        return false;
    }
};