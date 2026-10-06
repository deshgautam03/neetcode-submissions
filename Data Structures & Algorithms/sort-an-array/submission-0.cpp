class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++){
            int c=i;
            while(c>0 and(nums[c]<nums[c-1])){
                swap(nums[c],nums[c-1]);
                c--;
            }
        }
        return nums;
    }
};