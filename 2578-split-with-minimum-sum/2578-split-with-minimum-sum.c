int compare_chars(const void *a, const void *b) {
    return (*(const char *)a - *(const char *)b);
}

int splitNum(int num) {
    char str[15]={};
    int i=0;
    while(num!=0){
        int d=num%10;
        str[i]=d+'0';
        i++;
        num/=10;
    }
    int n=strlen(str);
    qsort(str, n, sizeof(char), compare_chars);
    int num1=0,num2=0;
    for(int i=0;str[i];i++){
        if(i%2==0){
            num1*=10;
            num1+=str[i]-'0';
        } else {
            num2*=10;
            num2+=str[i]-'0';
        }
    }
    return num1+num2;
}