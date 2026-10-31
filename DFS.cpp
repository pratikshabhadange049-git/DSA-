#include<iostream>
using namespace std;

int G[20][20],visited[20],n;

void DFS(int i)
{
    int j;
     cout<<i<<"";
     visited[i]=1;

     for(j=0;j<n;j++)
     {
        if(!visited[j]&& G[i][j]==1)
        DFS(j);
     }
}
int main()
{
    int i,j;
    cout<<"\n Enter the no. of vertices:";
    cin>>n;

    cout<<"\n Enter the adjacency matrix of the graph:\n";

    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
       cin>>G[i][j];


    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      visited[i]=0;
    cout<<"\nDFS traversal is:";
    DFS(0);

    return(0);
}

/*
//Output:
PS D:\Pratiksha> cd "d:\Pratiksha\" ; if ($?) { g++ DFS_traversal.cpp -o DFS_traversal } ; if ($?) { .\DFS_traversal }

 Enter the no. of vertices:4

 Enter the adjacency matrix of the graph:
0 1 0 1 
1 0 1 0
0 1 0 1 
1 0 1 0

DFS traversal is:0123
*/
