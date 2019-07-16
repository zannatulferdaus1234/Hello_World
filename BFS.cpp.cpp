#include<bits/stdc++.h>
#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;
int node,edge;
int adj[20][20];
int color[20];
int par[20];
int dis[20];

void bfs(int startingNode)
{
    for(int i=0;i<node;i++)
    {
        color[i]=WHITE;
        dis[i]=-1;
        par[i]=-1;
    }
dis[startingNode]=0;
    par[startingNode]=-1;

    queue<int>q;
    q.push(startingNode);

    while(!q.empty())
    {
    int x;
    x=q.front();
    q.pop();

    color[x]=GRAY;
     cout<<x<<"  ";
    for(int i=0;i<node;i++)
    {
        if(adj[x][i]==1)
        {
            if(color[i]==WHITE)
            {
                q.push(i);
                dis[i]=dis[x]+1;
                par[i]=x;
            }
        }
    }
    color[x]=BLACK;
    }
}

int main()
{

    cin>>node>>edge;
    while(edge--)
    {
        int n1,n2;
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    bfs(0);
    //cout<<"\nParent of node 12 -> "<<par[12]<<"\nDistance from node 12 -> "<<dis[12];
}
