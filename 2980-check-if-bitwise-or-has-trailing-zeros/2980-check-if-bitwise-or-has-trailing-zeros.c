bool hasTrailingZeros(int* nums, int n) {
    int count=0,i=0;
    while(count<2,i<n){
        if((nums[i]%2)==0){
            count++;
        }
        i++;
    }
    if(count>=2) return true;
    return false;
}