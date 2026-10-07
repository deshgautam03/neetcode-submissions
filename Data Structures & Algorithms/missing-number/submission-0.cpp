class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // unordered_set<int> res;
        int n=nums.size();
        int high=n;
        int len=high-0+1;
        int sum=(len*(len-1)/2);
        int s=0;
        // int low=0,high=n-1;
        for(int i=0; i<n; i++){
            s+=nums[i];
        }
        return sum-s;
    }
};
