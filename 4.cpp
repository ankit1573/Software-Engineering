#include<iostream>
#include<vector>
using namespace std;
main()
{
    int V, E, i, j, u, v, c;
    cout<<"Enter the number of vertices\n";
    cin>>V;
    cout<<"Enter the number of edges\n";
    cin>>E;
    cout<<"Enter 1 for directed graph and 2 for undirected graph\n";
    cin>>c;
    int adj[V+1][V+1];
    for(i=0;i<V+1;i++)
    {
        for(j=0;j<V+1;j++)
            adj[i][j]=0;
    }
    for(int i=0;i<E;i++)
    {
        cout<<"Edge "<<i+1;
        cout<<"\nEnter source vertex\n";
        cin>>u;
        while(u<=0 || u>V)
        {
            cout<<"Enter valid source vertex\n";
            cout<<"Enter source vertex ";
            cin>>u;
        }
        cout<<"Enter destination vertex\n";
        cin>>v;
        while(v<=0 || v>V)
        {
            cout<<"Enter valid source vertex\n";
            cout<<"Enter source vertex ";
            cin>>v;
        }
        adj[u][v]=1;
        if(c==2)
            adj[v][u]=1;
    }
    int idegree,odegree;
    for(i=1;i<V+1;i++)
     {
        //cout<<"Node "<<i;
        idegree=odegree=0;
        for(j=1;j<V+1;j++)
          {
            if(adj[i][j]==1)
                odegree++;
            if(adj[j][i]==1)
                idegree++;
            //if
          }
          cout<<"Node "<<i;
          cout<<"\nIndegree is "<<idegree;
          cout<<"\nOutdegree is "<<odegree<<endl;
     }
}
