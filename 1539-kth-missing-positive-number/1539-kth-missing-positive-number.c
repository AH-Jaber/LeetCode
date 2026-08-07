int findKthPositive(int* arr, int n, int k) {
    int freq[2050] = {};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    int i = 0, j = -1, ans;
    while (j != k) {
        if (freq[i] == 0) {
            j++;
            if (j == k)
                ans = i;
        }
        i++;
    }

    return ans;
}