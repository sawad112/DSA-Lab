#include <stdio.h>
#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int queue[MAX];

int front = -1;
int rear = -1;

void enqueue(int value){
    queue[++rear] = value;
}

int dequeue(){
    return queue[++front];
}
void bfs(int start, int vertices){
    enqueue(start);
    visited[start] = 1;

    while(front != rear)
    {
        int node = dequeue();
        printf("%d ", node);
        for(int i = 0; i < vertices; i++){
            if(graph[node][i] == 1 && visited[i] == 0){
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int vertices = 5;

    // Undirected Graph
    graph[0][1] = 1;
    graph[1][0] = 1;

    graph[0][2] = 1;
    graph[2][0] = 1;

    graph[1][3] = 1;
    graph[3][1] = 1;

    graph[2][4] = 1;
    graph[4][2] = 1;

    printf("BFS Traversal: ");
    bfs(0, vertices);
    return 0;
}