char findTheDifference(char* s, char* t) {
    int* a1=(int*)calloc(30,sizeof(int));
    int* a2=(int*)calloc(30,sizeof(int));
    for(int i=0;t[i];i++){
        if(s[i]){
            a1[s[i]-'a']++;
        }
        a2[t[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a1[i]!=a2[i]) return 'a'+i;
    }
    return false;
}