bool canPlaceFlowers(int* a, int n, int k) {
    if(k==0) return true;
    
    if(n==1){
        if(a[0]==0 && k==1) return true;
        else return false;
    }
    if(n==2){
        if(a[0]==0 && a[1]==0 && k==1) return true;
        else return false;
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (a[i] == 0 && a[i + 1] == 0) {
                count++;
                a[0] = 1;
            }
        } else if (i==(n-1)) {
            if (a[i] == 0 && a[i - 1] == 0) {
                count++;
                a[n - 1] = 1;
            }
        } else {
            if (a[i] == 0 && a[i - 1] == 0 && a[i + 1] == 0) {
                count++;
                a[i] = 1;
            }
        }
    }
    if (k <= count) {
        return true;
    }
    return false;
}