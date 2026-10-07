class Solution {
public:
    void sortColors(vector<int>& nums) {
        //####multi pass solution#####
       /* int zeros=0,ones=0,twos=0,j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                zeros++;
            }
            else if(nums[i]==1){
                ones++;
            }
            else{
                twos++;
            }
        }
            while(zeros!=0){
                nums[j]=0;
                j++;
                zeros--;
            }
            while(ones!=0){
                nums[j]=1;
                j++;
                ones--;
            }
            while(twos!=0){
                nums[j]=2;
                j++;
                twos--;
            }

        } */

        // ###2-Pointer Single pass problem####
        int n=nums.size();
        int low=0,high=n-1,mid=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[high],nums[mid]);
                high--;
            }

        }
    }
};