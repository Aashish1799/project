int** generateMatrix(int n, int* returnSize, int** returnColumnSizes){
    int direction[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    *returnSize = n;
    int** matrix = (int**) malloc(n * sizeof(int*));
    *returnColumnSizes = (int*) malloc(n * sizeof(int));
    int counter = 1;
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*) malloc(n * sizeof(int));
        (*returnColumnSizes)[i] = n;
    }
    for (int round = 0; round < (n + 1) / 2; round++){
        int x = round, y = round;
        matrix[x][y] = counter;     /* This is for the case n is odd. */
        for (int i = 0; i < 4; i++) {
            for (int j = round; j < n - 1 - round; j++) {
                matrix[x][y] = counter++;
                x += direction[i][0];
                y += direction[i][1];
            }
        }
    }
    return matrix;
}
