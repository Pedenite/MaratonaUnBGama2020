package leetcode;

class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if (l1 == null && l2 == null) {
            return null;
        }

        var res = new ListNode();
        var itr = res;

        while (true) {
            itr.val = Integer.MAX_VALUE;
            if (l1 != null) {
                itr.val = l1.val;
            }
            
            if (l2 != null && l2.val <= itr.val) {
                itr.val = l2.val;
                l2 = l2.next;
            } else {
                l1 = l1.next;
            }
            
            if (l1 == null && l2 == null) {
                break;
            }

            itr = itr.next = new ListNode();
        }

        return res;
    }

    public static void main(String[] args) {
        var l1 = new ListNode(1, new ListNode(2, new ListNode(4)));
        var l2 = new ListNode(1, new ListNode(3, new ListNode(4)));

        var res = new Solution().mergeTwoLists(l1, l2);
        while (res != null) {
            System.out.println(res.val);
            res = res.next;
        }
    }
}

// the solution didn't work because the break keyword didn't work as expected on leetcode.
class ActualSolution extends Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if (l1 == null && l2 == null) {
            return null;
        }

        var res = new ListNode();
        var itr = res;

        while (l1 != null || l2 != null) {
            itr = itr.next = new ListNode();
            itr.val = Integer.MAX_VALUE;
            
            if (l1 != null) {
                itr.val = l1.val;
            }
            
            if (l2 != null && l2.val <= itr.val) {
                itr.val = l2.val;
                l2 = l2.next;
            } else {
                l1 = l1.next;
            }
        }

        return res.next;
    }
}