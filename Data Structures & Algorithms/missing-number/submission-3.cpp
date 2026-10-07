class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // ####Normal approach O(1) space and O(n) time complexities#####
       /* int n=nums.size();
        int len=n+1;
        int sum=(len*(len-1)/2);
        int s=0;
        for(int i=0; i<n; i++){
            s+=nums[i];
        }
        return sum-s;*/

        // ##### XOR approach O(1) space and O(n) time complexities#####
        int res=nums.size();
        for(int i=0; i<nums.size(); i++){
            res^=i;
            res^=nums[i];
        }
        return res;
    }
};
