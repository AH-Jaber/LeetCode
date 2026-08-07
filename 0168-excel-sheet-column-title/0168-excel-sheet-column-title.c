char* convertToTitle(int columnNumber) {
    char* ans = (char*)calloc(50, sizeof(char));
    for (int i = 0; columnNumber!=0; i++) {
        columnNumber--;
        char ch = 65 + (columnNumber % 26);
        ans[i] = ch;
        columnNumber /= 26;
    }
    int n=strlen(ans);
    int i=0,j=n-1;
    while(i<j){
        char temp=ans[i];
        ans[i]=ans[j];
        ans[j]=temp;
        i++;
        j--;
    }
    return ans;
}