#include <stdio.h>
#define N 3
void printPuzzle(int puzzle[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", puzzle[i][j]);
        printf("\n");
    }
    printf("\n");
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void moveRight(int puzzle[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (puzzle[i][j] == 0 && j != N - 1) {
                swap(&puzzle[i][j], &puzzle[i][j + 1]);
                return;
            }
        }
    }
}

void moveDown(int puzzle[N][N]) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N; j++) {
            if (puzzle[i][j] == 0) {
                swap(&puzzle[i][j], &puzzle[i + 1][j]);
                return;
            }
        }
    }
}

int main() {
    int puzzle[N][N] = {
        {0, 1, 3},
        {4, 2, 5},
        {7, 8, 6}
    };
    printf("Initial State:\n");
    printPuzzle(puzzle);
    printf("Moving to Goal State:\n");
    moveRight(puzzle);
    printPuzzle(puzzle);
  moveDown(puzzle);
    printPuzzle(puzzle);
   moveRight(puzzle);
    printPuzzle(puzzle);
    moveDown(puzzle);
    printPuzzle(puzzle);
    printf("Goal State:\n");
    printPuzzle(puzzle);
    return 0;
}