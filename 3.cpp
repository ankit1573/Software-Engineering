#include<iostream>
#include<vector>
using namespace std;
typedef pair<int,int> p;
typedef vector<p> V;

int main()
{
    int n,m,u,v,w;
    cout<<"Enter the number of vertices\n";
    cin>>n;
    cout<<"Enter the number of edges\n";
    cin>>m;
    vector<V> adjList(n+1);
    for(int i=0; i<m; i++)
    {

        cout<<"Edge "<<i+1<<endl;
        cout<<"Enter source vertex ";
        cin>>u;
        while(u<=0 || u>n)
        {
            cout<<"Enter valid source vertex\n";
            cout<<"Enter source vertex ";
            cin>>u;
        }
        cout<<"Enter destination vertex ";
        cin>>v;
        while(v<=0 || v>n)
        {
            cout<<"Enter valid destination vertex\n";
            cout<<"Enter destination vertex ";
            cin>>v;
        }
        cout<<"Enter weight ";
        cin>>w;
        adjList[u].push_back(make_pair(v,w));
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<(int)adjList[i].size(); j++)
        {
            cout<<"Edge is "<<i<<" -> "<<adjList[i][j].first<<endl;
            cout<<"Weight is "<<adjList[i][j].second<<endl;
        }
    }
    return 0;
}
