char lc(char n){
    if(n>='a' && n<='z') return n;
    return n+32;
}

int countKeyChanges(char* s) {
    int count=0;
    for(int i=1;s[i];i++){
        if(lc(s[i])!=lc(s[i-1])){
            count++;
        }
    }

    return count;
}