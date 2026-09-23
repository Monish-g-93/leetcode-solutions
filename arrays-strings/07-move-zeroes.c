#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int index = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[index] = nums[i];
            index++;
        }
    }

    while (index < numsSize) {
        nums[index] = 0;
        index++;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = 5;

    moveZeroes(nums, n);

    printf("After moving zeroes: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}