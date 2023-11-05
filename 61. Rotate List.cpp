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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int c=1;
        if(head==NULL || head->next== NULL)
            return head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            c++;
        }
        temp=head;
        k=k%c;
        for(int i=1;i<=k;i++)
        {
            ListNode* tail=head;
            ListNode* prev=NULL;
            while(tail->next!=NULL)
            {
                prev=tail;
                tail=tail->next;
            }
            tail->next=head;
            prev->next=NULL;
            head=tail;
        }
        return head;
    }
};
