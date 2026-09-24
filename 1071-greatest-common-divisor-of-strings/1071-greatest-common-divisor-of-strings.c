int gcd(int x,int y){
    int max = (x>y)?x:y;
    int min = (x<y)?x:y;
    if(max%min==0) return min;
    return gcd(max%min,min);
}

char* gcdOfStrings(char* str1, char* str2) {
    int m=strlen(str1);
    int n=strlen(str2);
    char* type1 = (char*)malloc((m+n+1)*sizeof(char));
    char* type2 = (char*)malloc((m+n+1)*sizeof(char));
    strcpy(type1,str1);
    strcat(type1,str2);
    strcpy(type2,str2);
    strcat(type2,str1);
    int flag = strcmp(type1,type2);
    free(type1);
    free(type2);
    if(flag!=0){
        char* empty = (char*)calloc(1,sizeof(char));
        return empty;
    }
    int s = gcd(m,n);
    char* ans = (char*)calloc(s+1,sizeof(char));
    strncpy(ans,str1,s);
    return ans;
}