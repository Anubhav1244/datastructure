#include<stdio.h>
int a[100][100],f[100];
void read_adj(int n)
{
    printf("enter the addjency matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void dfs(int u,int n)
{
    int v;
    f[u]=1;
    printf("%d\t",u);
    for(v=0;v<n;v++)
    {
        if (a[u][v]==1&&f[v]==0)
        {
            dfs(v,n);
        }
        
    }
}
int main()
{
    int source,i,n;
    printf("enter the numer of nodes");
    scanf("%d",&n);
    read_adj(n);
    for ( source = 0; source < n; source++)
    {
        for(i=0;i<n;i++)
        {
            f[i]=0;
        }
        dfs(source,n);
    }
    

}