class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        vector<int> v;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        cout<<"size is: "<<v.size();
        int t=0;
        if(v.size()==0)
            return head;
        int s=v.size();
        for(int i=0;i<=s-2;i=i+2)
        {
            t=v[i];
            v[i]=v[i+1];
            v[i+1]=t;
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
