bool isPowerOfFour(int n) {
    double x=log10(n)/log10(4);
    if((int)x==x) return true;
    return false;
}