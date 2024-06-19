class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int n = s.size();
        int left = 0;
        int right = 0;
        int i = 0;

        while (i < n) {
            while (i < n && s[i] == ' ') { // skips leading spaces
                i++;
            }

            if (i == n) { // stops idx from going out of bounds
                break;
            }

            while (i < n && s[i] != ' ') {
                s[right++] = s[i++];
            }
            reverse(s.begin() + left, s.begin() + right); // reverse chars of current word
            s[right++] = ' '; 
            left = right;
            i++;
        }
        s.resize(right - 1);
        return s;
    }
};

/* req:
    - fn given string
    - reverse order of words
    - do not include extra spaces
    - return reversed string
*/

// reverse entire string
// reverse each word
// init size of str
// init 3 pointers to 0
// reverse chars of current word
// add space after word
// update left pointer to start of next word
// increment i
// remove trailing space after last word
// return s
