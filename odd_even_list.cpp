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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr or head->next == nullptr) {
            return head;
        }

        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *even_head = even;

        while(even != nullptr and even->next != nullptr) {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = even_head;
        return head;
    }
};

// if there is 0 or 1 node, return head
// init odd pointer to head and even pointer to head->next
// init even_head pointer to even --> keeps track of LL
// loop while even and even.next are not null, 
// update odd->next to the node after next --> skips even node
// do the same with even --> skips odd
// move odd and even to next nodes
// after looping, link last node in odd to head of even list
// return head
