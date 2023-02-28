class Solution {
public:
    void deleteNode(ListNode* node) {

        ListNode *temp=NULL;
        temp = node->next;

        node->val=node->next->val;
        node->next=node->next->next;
        delete temp;
    }
};
