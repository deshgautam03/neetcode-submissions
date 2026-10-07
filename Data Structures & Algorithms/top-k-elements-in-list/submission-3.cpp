class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<pair<int,int>> res;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        for(auto &p:freq){
            res.push_back({p.second,p.first});
        }
        sort(res.rbegin(),res.rend());
        vector<int> result;
        for(int i=0; i<k; i++){
            result.push_back(res[i].second);
            // result[i]=res[i].first;
        }
        return result;
        // ###there is also bucket sort solution available which will sort this in o(n) timen we will look it after some time
    }
};
