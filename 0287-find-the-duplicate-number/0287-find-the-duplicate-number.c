int findDuplicate(int* nums, int n) {
    int* freq=(int*)calloc(n+2,sizeof(int));
    for(int i=0;i<n;i++) freq[nums[i]]++;
    for(int i=1;i<n+2;i++){
        if(!(freq[i]==0 || freq[i]==1)){
            return i;
        }
    }
    return -1;
}