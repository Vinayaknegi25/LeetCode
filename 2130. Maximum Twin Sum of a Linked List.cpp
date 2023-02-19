class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        if(v.size()==2)
            return (v[0]+v[1]);
        vector<int> res;
        int n=v.size();
        for(int i=0;i<n/2;i++)
        {
            res.push_back(v[i]+v[n-1-i]);
        }
        return *max_element(res.begin(),res.end());
    }
};
