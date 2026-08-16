int missingMultiple(int* nums, int n, int k) {
    int* freq=(int*)calloc(201,sizeof(int));
    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }
    for(int i=k;1;i+=k){
        if(freq[i]==0) return i;
    }
    return -1;
}