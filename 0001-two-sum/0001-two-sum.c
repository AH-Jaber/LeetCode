/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* a = calloc(2000000001, sizeof(int));
    int x, y;
    int i;
    for (i = 0; i < numsSize; i++) {
        a[nums[i] + 1000000000]++;
    }

    x = -1;
    y = -1;
    for (i = 0; i < numsSize; i++) {
        int need = target - nums[i];

        if (need >= -1000000000 && need <= 1000000000 && a[need + 1000000000] > 0) {
            if (need != nums[i]) {
                x = nums[i];
                y = need;
                break;
            }
            else if (a[need + 1000000000] > 1) {
                x = nums[i];
                y = need;
                break;
            }
        }
    }
    int* ans = malloc(2 * sizeof(int));
    *returnSize = 2;
    ans[0] = -1;
    ans[1] = -1;
    
    for (i = 0; i < numsSize; i++) {
        if (nums[i] == x && ans[0] == -1)
            ans[0] = i;
        else if (nums[i] == y && ans[1] == -1)
            ans[1] = i;
    }
    free(a);

    return ans;
}