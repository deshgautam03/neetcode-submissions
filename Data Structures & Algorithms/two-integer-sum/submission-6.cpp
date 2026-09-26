class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        long long sum=0;
        vector<pair<int,int>> arr(n);
        for(int i=0; i<n; i++){
            arr[i]={nums[i],i};
        }
        sort(arr.begin(),arr.end());
        while(low<high){
            sum=(long long)arr[low].first+arr[high].first;
            if(sum==target){
                // return{arr[low].second,arr[high].second};
                int idx1=arr[low].second;
                int idx2=arr[high].second;
                return{min(idx1,idx2),max(idx1,idx2)};
            }
            else if(sum>target){
                high--;
            }
            else{
                low++;
            }
        }
        return {};
    }
};
