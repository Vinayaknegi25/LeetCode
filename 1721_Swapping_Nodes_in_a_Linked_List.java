class Solution {
    public ListNode swapNodes(ListNode head, int k) 
    {
        int c=0;
        ListNode temp=head;
        while(temp != null)
        {
            temp=temp.next;
            c++;
        }
        temp=head;
        int beg=k,end=c-(k-1);
        ListNode h1=head,h2=head;
        for(int i=1;i<beg;i++)
            h1=h1.next;
        for(int i=1;i<end;i++)
            h2=h2.next;
        int v1,v2;
        v1=h1.val;
        v2=h2.val;
        h1.val=v2;
        h2.val=v1;
        return head;
        
    }
}
