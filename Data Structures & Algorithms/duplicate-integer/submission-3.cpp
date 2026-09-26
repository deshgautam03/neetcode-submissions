class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        // sort(nums.begin(),nums.end());
        // for(int i=0; i<n-1; i++){
        //     if(nums[i]==nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;
        // unordered_set<int> ans;
        // for(int i=0; i<n;i++ ){
        //     if(ans.count(nums[i])){
        //         return true;
        //     }
        //     ans.insert(nums[i]);
        // }
        // return false;
        unordered_map<int,int> count;
        for(int i=0; i<n; i++){
            count[nums[i]]++;
            if(count[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};