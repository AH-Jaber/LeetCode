/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int max(int* a,int n){
    int m = INT_MIN;
    for(int i=0;i<n;i++){
        m = (a[i]>m)?a[i]:m;
    }

    return m;
}

bool* kidsWithCandies(int* candies, int n, int extra, int* returnSize) {
    bool* ans = (bool*)malloc(n*sizeof(bool));
    *returnSize = n;
    int m = max(candies,n);
    for(int i=0;i<n;i++){
        if(candies[i]+extra >= m){
            ans[i] = true;
        } else {
            ans[i] = false;
        }
    }

    return ans;
}