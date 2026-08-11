/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int n, int* returnSize) {
    int* ans=(int*)malloc(n*sizeof(int));
    int* l=(int*)calloc(n,sizeof(int));
    int* r=(int*)calloc(n,sizeof(int));
    *returnSize=n;
    l[0]=0;r[0]=0;
    int sum=0;
    for(int i=0;i<n;i++){
        l[i]=sum;
        sum+=nums[i];
    }
    for(int i=0;i<n;i++){
        r[i]=sum-nums[i];
        sum-=nums[i];
    }
    for(int i=0;i<n;i++){
        ans[i]=abs(l[i]-r[i]);
    }
    return ans;
}