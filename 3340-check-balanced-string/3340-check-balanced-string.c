bool isBalanced(char* num) {
    int sum = 0, p = 1;
    for (int i = 0; num[i]; i++) {
        sum += ((num[i] - '0') * p);
        p = -p;
    }
    return (sum == 0) ? true : false;
}