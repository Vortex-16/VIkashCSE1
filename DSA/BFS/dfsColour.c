//Write a DFS program to color the graph using two colors such that no two adjacent vertices have same color.
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int graph[MAX][MAX], color[MAX], n;
int isBipartiteUtil(int v, int c) {
    color[v] = c;
    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1) {
            if (color[i] == -1) {
                if (!isBipartiteUtil(i, 1 - c)) {
                    return 0;
                }
            } else if (color[i] == c) {
                return 0;
            }
        }
    }
    return 1;
}
int isBipartite() {
    for (int i = 0; i < n; i++) {
        color[i] = -1;
    }
    for (int i = 0; i < n; i++) {
        if (color[i] == -1) {
            if (!isBipartiteUtil(i, 0)) {
                return 0;
            }
        }
    }
    return 1;
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
    if (isBipartite()) {
        printf("The graph is bipartite and can be colored using two colors.\n");
    } else {
        printf("The graph is not bipartite and cannot be colored using two colors.\n");
    }
    return 0;
}

/*
Output:
Enter number of vertices: 5
Enter number of edges: 5
Enter edge (u v): 0 1
Enter edge (u v): 0 3
Enter edge (u v): 1 2
Enter edge (u v): 2 3
Enter edge (u v): 3 4
The graph is not bipartite and cannot be colored using two colors.
*/