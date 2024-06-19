/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL) {
            return NULL;
        }

        ListNode *prev = new ListNode(0);
        prev->next = head;
        ListNode *slow = prev;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = slow->next->next;
        return prev->next;
    }
};

/* req:
    - fn given head of LL
    - delete middle node
    - return LL after deleting
    - middle node LL --> slow/fast pointers
*/

// base case: head is null --> return NULL
// init slow ptr to prev since we want to be at the node BEFORE middle
// fast pointer to head
// create dummy node prev
// set prev.next to head 
// traverse LL while fast and fast->next are not null
// move slow 1 step ahead
// move fast 2 steps ahead
// after looping to find middle node, assign slow to the node after middle
// return prev.next
