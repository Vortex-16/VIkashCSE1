# Depth First Search
Depth First Search (DFS) is a fundamental algorithm used for traversing or searching tree or graph data structures. The algorithm starts at a selected node (often referred to as the 'root' in trees) and explores as far as possible along each branch before backtracking.

## CODE:

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int graph[MAX][MAX], visited[MAX], n;
void dfs(int v) {
    visited[v] = 1;
    printf("%d ", v);
    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            dfs(i);
        }
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
        graph[v][u] = 1; 
    }
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    printf("DFS Traversal starting from vertex 0:\n");
    dfs(0);
    return 0;
}
---

### Pseudo Code:
```
DFS(graph, start_vertex):
    Create a stack S
    Create a set visited
    Push start_vertex onto S
    While S is not empty:
        vertex = Pop from S
        If vertex is not in visited:
            Add vertex to visited
            Print vertex
            For each neighbor of vertex in graph:
                If neighbor is not in visited:
                    Push neighbor onto S
```
---




### Output:
Enter number of vertices: 5
Enter number of edges: 4
Enter edge (u v): 0 1
Enter edge (u v): 0 2
Enter edge (u v): 1 3
Enter edge (u v): 1 4
DFS Traversal starting from vertex 0:
0 1 3 4 2
---

