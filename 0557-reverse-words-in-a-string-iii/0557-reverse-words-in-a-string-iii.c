void rev(char* s,int i,int j){
    while(i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}

char* reverseWords(char* s) {
    for(int i=0,j=0;s[j];j++){
        if(s[j+1]==' ' || s[j+1]=='\0'){
            rev(s,i,j);
            i=j+2;
        }
    }

    return s;
}