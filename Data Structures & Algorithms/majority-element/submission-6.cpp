class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int> freq;
        // int ans=0;
        // int n=nums.size();
        // for(int i=0; i<n; i++){
        //     freq[nums[i]]++;
        // }
        // for(auto x:freq){
        //     if(x.second>floor(n/2)) ans=x.first;
        // }
        // return ans;
        
        // sort(nums.begin(),nums.end());
        // int c=1,n=nums.size(),low=0,high;
        // if (n == 1) return nums[0];
        // // int n=nums.size();
        // for(high=1; high<n; high++){
        //     if(nums[high]==nums[low]){
        //         c++;
        //         low++;
        //         if(c>floor(n/2)) return nums[low];
        //     }
        //     else{
        //         c=1;
        //         low=high;;
        //     }
        // }
        // return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return (nums[n/2]);
    }
};