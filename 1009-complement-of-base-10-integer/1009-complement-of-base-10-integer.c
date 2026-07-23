int bitwiseComplement(int n) {
    if(n==0) return 1;
    int cmp;
    for(cmp=1;n>=cmp;cmp*=2);
    return cmp-n-1;
}