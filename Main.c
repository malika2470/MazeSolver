#include <stdio.h>
#include <stdlib.h>
#include "maze.h"

int main() {
    int** maze = read_maze("maze.txt");
    print_maze(maze);
    Cell start = {-1, -1};
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (maze[i][j] == 3) {
                start.x = i;
                start.y = j;
                break;
            }
        }
    }
    if (start.x == -1 || start.y == -1) {
        printf("Starting point not found.\n");
        return 0;
    }
    solve_maze(maze, start);
    print_maze(maze);
    return 0; 
}
