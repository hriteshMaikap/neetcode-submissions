class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>count;

        for (auto& num: nums){
            count[num]++;
        }

        //create a vector of vector length eq max the size of nums, because that is the number of times one number can appear.
        vector<vector<int>>freq (nums.size()+1);
        for (auto& val: count){
            freq[val.second].push_back(val.first);
        }

        //iterate from k to 1
        for (int i=freq.size()-1; i>0; --i){
            for (int n: freq[i]){
                ans.push_back(n);
            
                if(ans.size()==k){
                    return ans;
                }
            }
        }

        return ans;
        
    }
};