int minimumDeletions(int* nums, int n) {
    if(n<=2) return n;
    int min=0,max=0;

    for(int i=1;i<n;i++){
        min=(nums[i]<nums[min])?i:min;
        max=(nums[i]>nums[max])?i:max;
    }
    int l,r;
    if(max>min) {
        r=max;
        l=min;
    } else {
        r=min;
        l=max;
    }

    int a = r+1;
    int b = n-l;
    int c = l+1+n-r;

    int ans=(a>b)?b:a;
    ans=(ans<c)?ans:c;

    return ans;
}