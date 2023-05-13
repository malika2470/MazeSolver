#ifndef MAZE_H
#define MAZE_H

#define ROWS 10
#define COLS 10

typedef struct {
    int x, y;   // x and y coordinates of a cell
} Cell;

// Stack implementation using a linked list
typedef struct StackNode {
    Cell data;
    struct StackNode* next;
} StackNode;

typedef struct {
    StackNode* top;
} Stack;

int** read_maze(char* filename);
void print_maze(int** maze);
void solve_maze(int** maze, Cell start);
void push(Stack* s, Cell data);
Cell pop(Stack* s);

#endif
