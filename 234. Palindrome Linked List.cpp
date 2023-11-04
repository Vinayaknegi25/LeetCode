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

// Using stack easy method for me atleast

ListNode *temp=head;
    int c=0;
    stack<int> st;
    while(temp != NULL)
    {
        st.push(temp->val);
        c++;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(temp->val != st.top())
        {
            return false;
            break;
        }
        st.pop();
        temp=temp->next;
    }
    return true;
