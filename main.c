#include <stdio.h>
#include "test.h"

int count_special_elements(int** matrix, int rows, int cols) {
    int count = 0;

    for (int col = 0; col < cols; ++col) {
        for (int row = 0; row < rows; ++row) {
            int sum = 0;
            for (int i = 0; i < rows; ++i) {
                if (i != row) {
                    sum += matrix[i][col];
                }
            }
            if (matrix[row][col] > sum) {
                count++;
            }
        }
    }

    return count;
}