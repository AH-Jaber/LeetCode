void pull(char* str, int i) {
    while (str[i]) {
        str[i] = str[i + 1];
        i++;
    }
}

void rev(char* str, int i, int j) {
    while (i < j) {
        char t = str[i];
        str[i] = str[j];
        str[j] = t;
        i++;
        j--;
    }
}

char* reverseWords(char* str) {
    rev(str, 0, strlen(str) - 1);

    int i, j;
    for (i = 0; str[i]; i++) {
        if (str[i] != ' ')
            break;
    }
    // i = 0;
    for (j = i; str[j]; j++) {
        if (str[j] != ' ' && (str[j + 1] == ' ' || str[j + 1] == '\0')) {
            rev(str, i, j);
            // i = j + 2;
            for (i = j + 1; str[i]; i++) {
                if (str[i] != ' ')
                    break;
            }
        }
    }

    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            pull(str, i);
            i--;
        }
    }

    if (str[0] == ' ')
    {
        pull(str, 0);
    }

    int len = strlen(str);
    if (len > 0 && str[len - 1] == ' ')
    {
        str[len - 1] = '\0';
    }

    return str;
}
