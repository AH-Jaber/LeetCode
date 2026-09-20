int reverseDegree(char* s) {
    int ans=0;
    for(int i=0;s[i];i++){
        ans=ans+((26-(s[i]-97))*(i+1));
    }
    return ans;
}