void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortColors(int* a, int n) {
    int i = 0, j = 0, k = n - 1;

    for (j = 0; j <= k; j++)
    {
        if (a[j] == 0)
        {
            swap(a + i, a + j);
            i++;
        }
        else if (a[j] == 2)
        {
            swap(a + j, a + k);
            k--;
            j--;
        }
    }
}