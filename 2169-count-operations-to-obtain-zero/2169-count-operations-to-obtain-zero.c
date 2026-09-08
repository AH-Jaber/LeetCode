int countOperations(int num1, int num2) {
    int max=(num1>=num2)?num1:num2;
    int min=(num1<=num2)?num1:num2;
    if(max==0 || min==0) return 0;
    max=max-min;
    return 1 + countOperations(max,min);
}