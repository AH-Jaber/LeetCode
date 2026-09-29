int isvow(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
        c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return 1;
    return 0;
}

char* reverseVowels(char* s) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        if (isvow(s[i]) && isvow(s[j])) {
            char t = s[i];
            s[i] = s[j];
            s[j] = t;
            i++;
            j--;
            continue;
        }
        if(!isvow(s[i])) i++;
        if(!isvow(s[j])) j--;
    }
    return s;
}