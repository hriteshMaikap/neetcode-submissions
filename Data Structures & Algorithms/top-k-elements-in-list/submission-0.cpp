class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>freq;

        //frequency count
        for (auto& num: nums){
            freq[num]++;
        }

        //reverse sort based on frequency
        vector<pair<int,int>>sortedFreq;
        for (const auto& val: freq){
            sortedFreq.push_back({val.second, val.first});
        }
        sort(sortedFreq.rbegin(), sortedFreq.rend()); //notice this is descending sort

        for (int i=0; i<k; i++){
            ans.push_back(sortedFreq[i].second);
        }

        return ans;
        
    }
};