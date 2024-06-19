class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left <= right) {
            if(!isalnum(s[left])) {
                left++;
            }
            else if(!isalnum(s[right])) {
                right--;
            }
            else if(tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};

/* req: 
    - fn given a string
    - check if string is palindrome after converting to lowercase
    - return bool
*/

// init left pointer to 0
// init right pointer to s.size() - 1
// while left <= right,
// if char at left is not alpha, increment left
// else if char at right is not alpha, decrement right
// else if char at left != char at right, return false
// else, increment and decrement respective pointers
// after looping, return true
