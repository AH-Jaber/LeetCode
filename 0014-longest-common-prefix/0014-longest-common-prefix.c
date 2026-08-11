char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    int mini_Len = strlen(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int len = strlen(strs[i]);
        if (len < mini_Len) mini_Len = len;
    }
    char* prefix = (char*)calloc((mini_Len + 1),sizeof(char));
    int k=0;
    for (int i = 0; i < mini_Len; i++) {
        char ch = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != ch) return prefix;
        }
        prefix[k++]=ch;
    }
    return prefix;
}