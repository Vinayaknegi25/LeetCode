class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode *temp=head;
        vector<int> v;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int t=0;
        int j;
        for(int i=1;i<v.size();i++)
        {
            j=i;
            while(j>0 && v[j]<v[j-1])
            {
                swap(v[j], v[j-1]);
                j--;
            }
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
