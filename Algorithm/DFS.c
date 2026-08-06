#include <stdio.h>
#define MAX 10

int graph[MAX][MAX];
int visited[MAX];

void dfs(int node, int vertices){
    printf("%d ", node);

    visited[node] = 1;

    for(int i = 0; i < vertices; i++){
        if(graph[node][i] == 1 && visited[i] == 0){
            dfs(i, vertices);
        }
    }
}

int main(){
    int vertices = 5;

    graph[0][1] = 1; // Undirected Graph
    graph[1][0] = 1;
    graph[0][2] = 1;
    graph[2][0] = 1;
    graph[1][3] = 1;
    graph[3][1] = 1;
    graph[2][4] = 1;
    graph[4][2] = 1;

    printf("DFS Traversal: ");
    dfs(0, vertices);
    return 0;
}