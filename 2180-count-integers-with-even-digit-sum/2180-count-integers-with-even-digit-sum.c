int digsum(int n){
    if(n==0) return 0;
    return (n%10) + digsum(n/10);
}
int countEven(int num) {
    int count=0;
    for(int i=2;i<=num;i++){
        if((digsum(i)%2)==0) count++;
    }
    return count;
}