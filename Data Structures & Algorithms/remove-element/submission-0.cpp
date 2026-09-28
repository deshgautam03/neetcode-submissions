class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int count=0,j=0;
        int n=nums.size();
        int low=0,high=0;
        while(high<n){
            if(nums[high]!=val){
                nums[low]=nums[high];
                low++;
            }
            high++;
        }
        return low;
    }
};