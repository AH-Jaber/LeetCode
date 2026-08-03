int gcd(int a,int b){
    int max=(a>b)?a:b;
    int min=(a>b)?b:a;
    if(max%min==0) return min;
    return gcd(max%min,min);
}

int commonFactors(int a, int b) {
    int count=0,i;
    for(i=gcd(a,b);i>0;i--){
        if(a%i==0 && b%i==0) count++;
    }

    return count;
}