#include<stdio.h>
int a[10][10],vis[10]={0},i,j,k,n;
void dfs(int);
void main(){
    printf("Enter number of nodes:");
    scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    dfs(1);
    int con=0;
    for(i=1;i<=n;i++){
        if(vis[i]==1){
            con++;
        }
    }
    if(con==n){
        printf("Graph is connected");
    }
    else{
        printf("Graph is not connected");
    }
}
void dfs(int v){
    vis[v]=1;
    for(k=1;k<=n;k++){
        if(vis[k]==0 && a[v][k]==1){
            dfs(k);
        }
    }
}
