int min(int a, int b) {
    return (a < b) ? a : b;
}

int minPathSum(int** grid, int gridSize, int* gridColSize) {
    const int INF = 1e9 + 10;
    int H = gridSize;
    int W = gridColSize[0];

    // Allocate memory for results array
    int** results = (int**)malloc(H * sizeof(int*));
    for (int i = 0; i < H; i++) {
        results[i] = (int*)malloc(W * sizeof(int));
    }

    // Populate the results array
    for (int row = 0; row < H; row++) {
        for (int col = 0; col < W; col++) {
            if (row == 0 && col == 0) {
                results[row][col] = grid[row][col];
            } else {
                results[row][col] = grid[row][col] +
                    min((row == 0 ? INF : results[row - 1][col]),
                        (col == 0 ? INF : results[row][col - 1]));
            }
        }
    }

    int result = results[H - 1][W - 1];

    // Free the allocated memory for results array
    for (int i = 0; i < H; i++) {
        free(results[i]);
    }
    free(results);

    return result;
}