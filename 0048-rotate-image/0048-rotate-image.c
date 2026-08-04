void rotate(int** matrix, int n, int* m) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        int j = 0, k = m[i] - 1;
        while (j < k) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
            j++;
            k--;
        }
    }
    return;
}