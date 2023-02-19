class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
       ListNode* temp=head;
       vector<int> v;
       while(temp!=NULL)
       {
           v.push_back(temp->val);
           temp=temp->next;
       }
       int n=v.size();
       int i=0;
       while(i<n/2)
       {
            if(v[i]!=v[n-1-i])
                return false;
            i++;
       }
       return true;
    }

};
