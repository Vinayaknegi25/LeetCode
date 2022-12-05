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
    public ListNode deleteMiddle(ListNode head) {
        ListNode temp=head;
        int c=0;
        while(temp!=null)
        {
            c++;
            temp=temp.next;
        }
        if(c==1)
            return null;
        if(c==2)
        {
            head.next=null;
            return head;
        }
        temp=head;
        for(int i=1;i<c/2;i++)
        {
            temp=temp.next;
        }
        temp.next=temp.next.next;
        return head;
    }
}
