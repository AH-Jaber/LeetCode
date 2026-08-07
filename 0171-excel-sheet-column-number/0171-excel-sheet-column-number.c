int titleToNumber(char* columnTitle) {
    int ans=0;
    int n=strlen(columnTitle);
    int i=n-1;
    long long int lv=1;
    while(i>=0){
        int d=columnTitle[i]-'A'+1;
        ans+=(d*lv);
        lv*=26;
        i--;
    }
    return ans;
}