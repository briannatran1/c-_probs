class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (size_t i{0}; i < nums.size(); i++) {
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

// loop through nums
// assign new val at i to square of num
// sort nums in asc
// return nums

// O(n) solution
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        vector <int> res(nums.size(), 0);

        for (int i = nums.size() - 1; i >= 0; i--) {
            if(abs(nums[left]) > abs(nums[right])) {
                res.at(i) = nums[left] * nums[left];
                left += 1;
            }
            else {
                res.at(i) = nums[right] * nums[right];
                right -= 1;
            }
        }
        return res;
    }
};

// O(n) solution:
// initialize left and right pointers
// initialize vector to have 0s size of nums vec
// loop through nums backwards
// if abs of num at left > abs of num at right,
// set i in res to square of num at left
// else,
// do for right
// return res vector
