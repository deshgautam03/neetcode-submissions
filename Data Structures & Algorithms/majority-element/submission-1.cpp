class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int ans=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        for(auto x:freq){
            if(x.second>floor(n/2)) ans=x.first;
        }
        return ans;
    }
};