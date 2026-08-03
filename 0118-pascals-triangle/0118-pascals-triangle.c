/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int** generate(int n, int* row, int** column) {
    int** a = (int**)malloc(sizeof(int*) * n);
    *row = n;
    *column = (int*)malloc(sizeof(int) * n);
    for (int i=0; i<n; i++) {
        (*column)[i] =i+1;
        a[i] = (int*)malloc(sizeof(int)*(i+1));
        a[i][0] = a[i][i] = 1;
        for (int j=1; j<=i/2; j++) {
            a[i][j]=a[i][i-j]= a[i-1][j-1]+a[i-1][j];
        }
    }
    return a;
}