#include <stdio.h>

int main()
{
    int graph[5][5] = {0};
    int vertices = 5;

    // Add edges
    graph[0][1] = 1;
    graph[1][0] = 1;

    graph[0][2] = 1;
    graph[2][0] = 1;

    graph[1][3] = 1;
    graph[3][1] = 1;

    graph[2][4] = 1;
    graph[4][2] = 1;

    // Display graph
    printf("Adjacency Matrix:\n");

    for(int i = 0; i < vertices; i++){
        for(int j = 0; j < vertices; j++){
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}