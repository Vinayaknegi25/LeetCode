/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode oddEvenList(ListNode head) 
    {
        if(head==null || head.next==null)
            return head;
        int c=0;
        ListNode t1=head;
        ListNode t2=head.next;
        ListNode t3=head.next;
        while(t1.next!=null)
        {
            c++;
            t3=t1.next;
            t1.next=t3.next;
            if(t1.next!=null || c%2==0)
            {
                t1=t3;
            }
        }
        t1.next=t2;
        return head;
    }
}
