/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast != nullptr and fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                slow = head;

                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};

/* req:
    - fn given head of LL
    - if no cycle, return null
    - return starting node of cycle
*/

// init slow and fast pointers to head
// loop while fast and fast.next are not null
// move slow 1 step ahead
// move fast 2 steps ahead
// if slow == fast --> cycle, so set slow back to start of cycle
// move both pointers at same pace until they meet again
// met node = starting point of cycle
