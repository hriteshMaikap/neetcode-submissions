class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>numIndex;
        //one pass solution
        for(int i=0; i<nums.size(); i++){
            int diff = target-nums[i];
            if (numIndex.find(diff)!=numIndex.end()){
                return {numIndex[diff],i};
            }
            numIndex[nums[i]]=i;
        }

        return {};
    }
};