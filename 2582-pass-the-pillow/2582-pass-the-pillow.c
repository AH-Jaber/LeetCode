int passThePillow(int n, int time) {
    
    int p=(n-1)*2;
    time=time%p;
    if(time>n-1){
        time%=(n-1);
        return n-time;
    } else if(time<n-1) {
        return time+1;
    } else {
        return n;
    }
    return 0;
}