int removeElement(int* nums, int n, int val) {
    int i,j;

    for(i=0,j=n-1;i<=j;){
        if(nums[i]==val){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            j--;
        } else {
            i++;
        }
    }

    return j+1;
}