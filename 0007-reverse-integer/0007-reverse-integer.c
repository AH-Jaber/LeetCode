int reverse(int x){
    if(x<INT_MIN || x>INT_MAX) return 0;
    int flag=0;
    long int num=0;

    if(x<0){ 
        x=(long)x*(-1);
        flag=1;
    }

    while(x!=0){
        num*=10;
        num+=(x%10);
        x/=10;
    }

    if(num<INT_MIN || num>INT_MAX) return 0;
    if(flag==1) num*=(-1);
    return (int)num;
}