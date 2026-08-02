int findLengthOfLCIS(int* nums, int n) {
    int curr=1,ans=1;
    for(int i=1;i<n;i++){
        if(nums[i]>nums[i-1]) curr++;
        else curr=1;
        ans=(curr>ans)?curr:ans;
    }
    return ans;
}