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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode();
        ListNode *curr = head;
        int carry = 0;

        while (l1 || l2 || carry != 0) {
            int val1 = 0, val2 = 0;

            if (l1) {
                val1 = l1->val;
            }
            if (l2) {
                val2 = l2->val;
            }

            int sum = val1 + val2 + carry;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10); // creates node with sum val to LL

            curr = curr->next;
            if(l1) {
                l1 = l1->next;
            }
            if(l2) {
                l2 = l2->next;
            }
        }
        return head->next;
    }
};

/* req:
    - fn given 2 non-empty LL
    - digits are stored in reverse order
    - add 2 nums and return sum as LL
*/

// init head pointer to dummy node
// init curr pointer to head
// init carry var to 0
// loop while there are still digits to sum up, or if there's a carryover
// init values of l1 and l2 to zero
// calculate sum of val1 + val2 + carry
// calc carry for next iteration 
// set val for next digit as curr->next
// advances l1 and l2 to their next nodes if not null
// return start of LL which is next->head
