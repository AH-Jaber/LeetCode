bool isPowerOfThree(int n) {
    double x=log10(n)/log10(3);
    if((int)x==x) return true;
    return false;
}