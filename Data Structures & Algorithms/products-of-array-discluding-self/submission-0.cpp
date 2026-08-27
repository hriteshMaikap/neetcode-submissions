class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zeroCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount++;
            } else {
                product *= nums[i];
            }
        }

        vector<int> answers(nums.size(), 0);

        if (zeroCount > 1) {
            return answers;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (zeroCount == 1) {
                if (nums[i] == 0) {
                    answers[i] = product;
                }
            } else {
                answers[i] = product / nums[i];
            }
        }

        return answers;
    }
};