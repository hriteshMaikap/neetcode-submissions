class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>numIndex;
        //first pass store the index
        for(int i=0; i<nums.size(); i++){
            numIndex[nums[i]]=i;
        }

        //second pass
        //iterate thru array, and check for complement and return index
        for (int i=0; i<nums.size(); i++){
            int diff = target-nums[i];
            //check if a no. exists in map
            if (numIndex.count(diff) && numIndex[diff]!=i){
                return {i, numIndex[diff]};
            }
        }

        return {};
    }
};