void reverseString(char* s, int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        char ch = s[i];
        s[i] = s[j];
        s[j] = ch;
        i++;
        j--;
    }
    
    return;
}