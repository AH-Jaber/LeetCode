int min(int a,int b){
    if(a>b) return b;
    return a;
}

int minCostToMoveChips(int* position, int n) {
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(position[i]%2==0){
            a+=1;
        } else {
            b+=1;
        }
    }
    return min(a,b);
}