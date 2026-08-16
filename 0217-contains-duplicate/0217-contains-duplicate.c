bool containsDuplicate(int* nums, int n) {
    int* ans=(int*)calloc(2000000005,sizeof(int));
    for(int i=0;i<n;i++){
        ans[nums[i]+1000000000]++;
        if(ans[nums[i]+1000000000]==2){
            return true;
            break;
        }
    }
    return false;
}