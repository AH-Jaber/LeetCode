/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {
    int* ans=(int*)malloc(2*sizeof(int));
    *returnSize=2;
    int n=sqrt(area);
    int L=1;
    for(int i=n;i>=1;i--){
        if(area%i == 0) {
            L=area/i;
            n=i;
            break;
        }
    }
    ans[0]=L;ans[1]=n;
    return ans;
}