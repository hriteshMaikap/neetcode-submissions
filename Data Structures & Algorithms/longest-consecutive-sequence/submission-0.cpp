class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> sortedNums(nums.begin(), nums.end());

        int count = 0;
        int prevCount = 0;

        if (sortedNums.size() > 0) {
            for (auto it = sortedNums.begin(); 
                 it != prev(sortedNums.end()); 
                 ++it) {

                auto nextIt = next(it);

                if (*nextIt - *it == 1) {
                    count++;
                }
                else {
                    if (prevCount < count) {
                        prevCount = count;
                    }
                    count = 0;
                }
            }

            if (prevCount > count) {
                return prevCount + 1;
            }
            else {
                return count + 1;
            }
        }

        return 0;
    }
};