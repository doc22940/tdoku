#include "../include/tdoku.h"
#include <stdio.h>

int main(int argc, const char **argv) {
    char *puzzle = NULL;
    char solution[81];
    size_t size, guesses;

    while (getline(&puzzle, &size, stdin) != -1) {
        printf("%s", puzzle);
        SolveSudoku(puzzle, 1, 0, solution, &guesses);
        printf("%.81s\n\n", solution);
    }
}