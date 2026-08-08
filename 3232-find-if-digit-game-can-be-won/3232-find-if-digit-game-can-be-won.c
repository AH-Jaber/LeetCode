bool canAliceWin(int* nums, int n) {
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] > 9)
            b += nums[i];
        else
            a += nums[i];
    }
    if (a == b)
        return false;
    return true;
}