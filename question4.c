//question4
#include <stdio.h>
#define x 0
#define y 1
#define z 2
#define max_nodes 1000
#define O 1000000000
int n;
int e;
int cap[max_nodes][max_nodes]; 
int flow[max_nodes][max_nodes];
int color[max_nodes];
int pred[max_nodes];
int min(int x, int y){ 
    return x < y ? x : y;
}
int head, tail;
int q[max_nodes + 2];
void enqueue(int x){ 
    q[tail] = x;
    tail++;
    color[x] = y;
}
int dequeue(){ 
    int x = q[head]; 
    head++; 
    color[x] = z; 
    return x;
}
// Using BFS as a searching algorithm
int bfs(int start, int target){ 
    int u, v;
    for (u = 0; u < n; u++){
        color[u] = x; 
    }
    head = tail = 0; 
    enqueue(start); 
    pred[start] = -1; 
    while (head != tail){
        u = dequeue();
        for (v = 0; v < n; v++){
            if (color[v] == x && cap[u][v] - flow[u][v] > 0){ 
                enqueue(v);
                pred[v] = u;
            } 
        }
    }
return color[target] == z; 
}
// Applying fordfulkerson algorithm
int fordFulkerson(int source, int sink){
    int i, j, u;
    int max_flow = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) { 
            flow[i][j] = 0;
        } 
    }
// Updating the residual values of edges while (bfs(source, sink)) {
    int increment = O;
    for (u = n - 1; pred[u] >= 0; u = pred[u]){
        increment = min(increment, cap[pred[u]][u] - flow[pred[u]][u]); 
    }
    for (u = n - 1; pred[u] >= 0; u = pred[u]){ 
        flow[pred[u]][u] += increment; 
        flow[u][pred[u]] -= increment;
    }
// Adding the path flows max_flow += increment;
return max_flow;
}
int main(){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){ 
            cap[i][j] = 0;
        } 
    }
    n = 6; 
    e = 7;
    cap[0][1] = 8; 
    cap[0][4] = 3; 
    cap[1][2] = 9; 
    cap[2][4] = 7; 
    cap[2][5] = 2;
    cap[3][5] = 5; 
    cap[4][2] = 7; 
    cap[4][3] = 4;
    int s = 0, t = 5;
    printf("Max Flow is: %d\n", FordFulkerson(s, t)); 
    return(0); 
}