int removeDuplicates(int* nums, int n) {
    int i,j,k=n;

    for(i=1,j=0;i<n;i++){
        if(nums[i]==nums[j]){
            nums[i]=999;
            k--;
        } else {
            j=i;
        }
    }

    for(i=0,j=0;i<n;i++){
        if(nums[i]!=999){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            j++;
        }
    }

    return k;
}