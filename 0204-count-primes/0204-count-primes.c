int countPrimes(int n) {
    if(n<2) return 0;
    int* a=(int*)calloc(n,sizeof(int));
    a[0]=1;
    a[1]=1;
    int count=0;
    for(int i=2;i<n;i++){
        if(!(a[i])){
            count++;

            for(int j=2*i;j<n;j=j+i){
                a[j]=1;
            }

        }
    }

    free(a);
    return count;
}