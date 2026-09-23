#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    static char prefix[201];
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (prefix[j] != '\0' &&
               strs[i][j] != '\0' &&
               prefix[j] == strs[i][j]) {
            j++;
        }

        prefix[j] = '\0';
    }

    return prefix;
}

int main() {
    char* strs[] = {"flower", "flow", "flight"};
    int n = 3;

    printf("Longest Common Prefix: %s\n",
           longestCommonPrefix(strs, n));

    return 0;
}