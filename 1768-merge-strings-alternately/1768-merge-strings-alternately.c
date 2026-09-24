char* mergeAlternately(char* word1, char* word2) {
    char* ans = (char*)calloc(strlen(word1)+strlen(word2)+1,sizeof(char));
    int j=0,i=0,k=0;
    while(word1[i] && word2[j]){
        if(k%2==0){
            ans[k]=word1[i];
            i++;
        } else {
            ans[k]=word2[j];
            j++;
        }
        k++;
    }
    while(word1[i]){
        ans[k]=word1[i];
        i++;
        k++;
    }
    while(word2[j]){
        ans[k]=word2[j];
        j++;
        k++;
    }

    return ans;
}