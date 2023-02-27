class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        vector<int> v;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int t=0;
        int l=left-1,r=right-1;
        while(l<=r)
        {
            t=v[l];
            v[l]=v[r];
            v[r]=t;
            l++;
            r--;
        }
        temp=head;
        int i=0;
        while(temp!=NULL)
        {
            temp->val=v[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};
