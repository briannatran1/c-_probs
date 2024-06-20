class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do  {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(fast != slow);

        fast = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};

/* req: 
    - fn given arr of ints
    - return duplicate
    - w/o modifying arr
    - O(1) extra space
*/

// slow/fast pointers
// init slow and fast pointer to first elem in arr
// do while slow != fast, move slow 1 step and fast 2 steps
// after looping, set fast back to first elem
// while slow != fast, move them at the same spped
// return fast
