
#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i, j);
                found = 1;
                break;
            }
        }

        if (found) {
            break;
        }
    }

    return 0;
}