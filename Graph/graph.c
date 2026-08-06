#include <stdio.h>
#include <stdlib.h>

struct Node {
    int vertex;
    struct Node *next;
};

struct Graph {
    int vertices;
    struct Node **adjList;
};

// Create new node
struct Node* createNode(int v){
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->vertex = v;
    newNode->next = NULL;

    return newNode;
}

// Create graph
struct Graph* createGraph(int vertices){
    struct Graph *graph = malloc(sizeof(struct Graph));

    graph->vertices = vertices;

    graph->adjList = malloc(vertices * sizeof(struct Node*));

    for(int i = 0; i < vertices; i++)
        graph->adjList[i] = NULL;

    return graph;
}

// Add edge (undirected graph)
void addEdge(struct Graph *graph, int src, int dest){
    struct Node *newNode = createNode(dest);

    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;


    newNode = createNode(src);

    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
}

// Display graph
void display(struct Graph *graph){
    for(int i = 0; i < graph->vertices; i++){
        struct Node *temp = graph->adjList[i];

        printf("\nVertex %d: ", i);

        while(temp){
            printf("-> %d ", temp->vertex);
            temp = temp->next;
        }
    }
}

int main(){
    int vertices = 5;
    struct Graph *graph = createGraph(vertices);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);

    display(graph);
    return 0;
}