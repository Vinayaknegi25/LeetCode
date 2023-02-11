class Solution {
public:
    ListNode* sortList(ListNode* head) {
        int n;
        ListNode* temp = head;
        vector <int> v;
        while(temp != NULL)
        {
            n++;
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        temp=head;
        int i=0;
        //while(temp !=NULL)
        for(int i=0;i<v.size();i++)
        {
            temp->val=v[i];
            //i++;
            temp = temp->next;
        }
        return head;
    }
};
