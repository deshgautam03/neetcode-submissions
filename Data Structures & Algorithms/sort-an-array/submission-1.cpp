class Solution {
private:
    void mergeSort(vector<int>& nums,vector<int>& temp, int left,int right){
        if(left>=right) return;
        int mid=left+(right-left)/2;
        mergeSort(nums,temp,left,mid);
        mergeSort(nums,temp,mid+1,right);
        merge(nums,temp,left,mid,right);
    }
    void merge(vector<int>& nums,vector<int>& temp,int left,int mid, int right){
        int i=left,j=mid+1,k=left;
        while(i<=mid and j<=right){
            if(nums[i]<=nums[j]) temp[k++]=nums[i++];
            else temp[k++]=nums[j++];
        }
        while(i<=mid) temp[k++]=nums[i++];
        while(j<=right) temp[k++]=nums[j++];

        for(int i=left; i<=right; i++){
            nums[i]=temp[i];
        }
    }
public:

    vector<int> sortArray(vector<int>& nums) {
        // ### INSERTION SORT O(n^2) and O(1) ###
        // for(int i=1; i<nums.size(); i++){
        //     int c=i;
        //     while(c>0 and(nums[c]<nums[c-1])){
        //         swap(nums[c],nums[c-1]);
        //         c--;
        //     }
        // }
        // return nums;

        //##### MERGE SORT O(nlogn) and O(n) #####
        int n=nums.size();
        vector<int> temp(n);
        mergeSort(nums,temp,0,n-1);
        return nums;

    }
};