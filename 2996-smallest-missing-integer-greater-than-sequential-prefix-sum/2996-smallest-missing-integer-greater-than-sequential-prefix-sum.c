int missingInteger(int* nums, int n) {
    int sum=nums[0],i;
    int* freq=(int*)calloc(1276,sizeof(int));
    for(i=1;i<n;i++){
        if(nums[i] == nums[i - 1] + 1){
            sum+=nums[i];
        } else {
            break;
        }
    }
    for(i=0;i<n;i++) freq[nums[i]]++;
    for(i=sum;1;i++){
        if(freq[i]==0) return i;
    }
    return -1;
}