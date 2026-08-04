/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int n, int* returnSize) {
    int* ans=(int*)malloc(101*sizeof(int));
    *returnSize=0;
    
    int freq[101]={};
    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }
    int p=0,q=n-1;
    for(int i=1;i<=100;i++){
        if(freq[i]!=0){
            p=i;
            break;
        }
    }
    for(int i=100;i>=1;i--){
        if(freq[i]!=0){
            q=i;
            break;
        }
    }
    int k=0;
    for(int i=p;i<=q;i++){
        if(freq[i]==0){
            ans[k++]=i;
            (*returnSize)++;
        }
    }
    return ans;
}