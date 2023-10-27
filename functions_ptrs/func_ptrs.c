#include <stdio.h>

int transandsum(int nums[], int (*trans)(int)) {
    // TODO: for some reason, next line returns 2
    // (size_t)(sizeof(nums) / sizeof(int));
    size_t arr_size = 4; 
    int acc = 0;
    for (size_t i = 0; i < arr_size; i++) {
         acc += (*trans)(nums[i]);
    }
    return acc;
}

int byten(int num) {
    return num * 10;
}

int main() {

    int nums[] = { 1, 2, 3, 4 };
    int res =
        // passing pointer to 'byten' function
        transandsum(nums, (int (*)(int))(byten));
    printf("Res: %d\n", res);
    return 0;
}

