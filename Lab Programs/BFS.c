#include<stdio.h>
int a[10][10],vis[10]={0},q[10],i,j,n,start;
void bfs(int);
void main(){
    printf("Enter number of nodes:");
    scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter starting vertex:");
    scanf("%d",&start);
    printf("BFS traversal:\n");
    bfs(start);
}
void bfs(int s){
    int f=0,r=-1;
    vis[s]=1;
    q[++r]=s;
    while(f<=r){
        int curr=q[f++];
        printf("%d\t",curr);
        for(i=1;i<=n;i++){
            if(a[curr][i]==1 && vis[i]==0){
                vis[i]=1;
                q[++r]=i;
            }
        }
    }
}
