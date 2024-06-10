#include <stdio.h>
#include <assert.h>

int count_special_elements(int** matrix, int rows, int cols);

void test() {
    int m1[3][3] = {
            {2, 1, 4},
            {1, 5, 2},
            {3, 2, 1}
    };
    int* matrix1[3] = {m1[0], m1[1], m1[2]};
    assert(count_special_elements(matrix1, 3, 3) == 2);

    int m2[2][2] = {
            {10, 2},
            {1, 20}
    };
    int* matrix2[2] = {m2[0], m2[1]};
    assert(count_special_elements(matrix2, 2, 2) == 2);

    int m3[4][4] = {
            {10, 1, 3, 2},
            {1, 20, 1, 3},
            {3, 2, 10, 1},
            {2, 1, 3, 20}
    };
    int* matrix3[4] = {m3[0], m3[1], m3[2], m3[3]};
    assert(count_special_elements(matrix3, 4, 4) == 4);

    printf("All tests passed!\n");
}

int main() {
    test();
    return 0;
}