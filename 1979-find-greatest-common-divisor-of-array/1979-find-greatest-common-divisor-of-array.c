int gcd(int a,int b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}

int findGCD(int* nums, int n) {
    int mn=nums[0],mx=nums[0];
    for(int i=1;i<n;i++){
        mx=(nums[i]>mx)?nums[i]:mx;
        mn=(nums[i]<mn)?nums[i]:mn;
    }
    return gcd(mx,mn);
}