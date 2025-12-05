# Graph Representation using Adjacency Matrix
An adjacency matrix is a 2D array used to represent a finite graph. The elements of the matrix indicate whether pairs of vertices are adjacent or not in the graph. If there is an edge between vertex i and vertex j, the element at row i and column j of the matrix is set to 1 (or the weight of the edge in weighted graphs); otherwise, it is set to 0.
### Code:
```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int graph[MAX][MAX], n;
void printGraph() {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int edges, u, v;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1; // For undirected graph
    }
    printGraph();
    return 0;
}
```
### Output:
Enter number of vertices: 4
Enter number of edges: 4
Enter edge (u v): 0 1
Enter edge (u v): 0 2
Enter edge (u v): 1 2
Enter edge (u v): 2 3
Adjacency Matrix:
0 1 1 0
1 0 1 0
1 1 0 0
0 0 1 0
### Pseudo Code:
```
Initialize a 2D array graph[MAX][MAX] to 0
Input number of vertices n
Input number of edges edges
For i from 0 to edges-1:
    Input edge (u, v)
    graph[u][v] = 1
    graph[v][u] = 1 // For undirected graph
Print the adjacency matrix
For i from 0 to n-1:
    For j from 0 to n-1:
        Print graph[i][j]
```
---
### Explanation:
1. We define a maximum size for the graph using `#define MAX 100`.
2. We create a 2D array `graph` to store the adjacency matrix and an integer `n` to store the number of vertices.
3. The `printGraph` function prints the adjacency matrix.
4. In the `main` function, we take input for the number of vertices and edges.
5. We then take input for each edge and update the adjacency matrix accordingly.
6. Finally, we call the `printGraph` function to display the adjacency matrix.
### Example Usage:
Enter number of vertices: 4
Enter number of edges: 4
Enter edge (u v): 0 1   
Enter edge (u v): 0 2
Enter edge (u v): 1 2
Enter edge (u v): 2 3
Adjacency Matrix:
0 1 1 0
1 0 1 0
1 1 0 0
0 0 1 0
### Output:
Adjacency Matrix:
0 1 1 0
1 0 1 0
1 1 0 0
0 0 1 0
