int minimumPushes(char* word) {
    int n=strlen(word);
    if(n<=8) return n;
    if(n<=16) return 8+2*(n-8);
    if(n<=24) return 24+3*(n-16);
    else return 48+4*(n-24);
}