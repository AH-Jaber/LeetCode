/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int n, int* returnSize) {
    *returnSize = n;
    int* prefix = (int*)malloc(n*sizeof(int));
    int* postfix = (int*)malloc(n*sizeof(int));
    int* ans = (int*)malloc(n*sizeof(int));
    prefix[0]=1,postfix[n-1]=1;
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1]*nums[i-1];
    }
    for(int i=n-2;i>=0;i--){
        postfix[i] = postfix[i+1]*nums[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i] = prefix[i]*postfix[i];
    }
    free(postfix);
    free(prefix);
    return ans;
}