int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int gcd(int a,int b){
    int max=(a>b)?a:b;
    int min=a+b-max;
    if(max%min==0) return min;
    return gcd(max%min,min);
}

long long gcdSum(int* nums, int n) {
    int* pgcd=(int*)malloc(n*sizeof(int));
    int mx=INT_MIN;

    for(int i=0;i<n;i++){
        mx=(nums[i]>mx)?nums[i]:mx;
        pgcd[i]=gcd(mx,nums[i]);
    }

    qsort(pgcd,n,sizeof(int),cmp);

    int i,j;
    long long sum=0;
    for(i=0,j=n-1;i<n/2;i++,j--){
        sum+=gcd(pgcd[i],pgcd[j]);
    }
    return sum;
}