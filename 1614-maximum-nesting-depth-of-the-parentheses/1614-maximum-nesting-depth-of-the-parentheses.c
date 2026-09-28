int maxDepth(char* s) {
    int c=0,mc=0;
    for(int i=0;s[i];i++){
        if(s[i]=='(') c++;
        else if(s[i]==')') c--;
        mc = (c>mc)? c:mc;
    }
    return mc;
}