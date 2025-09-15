#include<bits/stdc++.h>
using namespace std;
int par[1005];
int group_size[1005];

int find(int node)
{
    if(par[node] == -1)
    return node;

    int leader = find(par[node]);
    par[node] =leader;
    return leader;

}
int dsu_union(int node1,int node2)
{
    int leader1 =find(node1);
    int leader2 =find(node2);
}

int main() {
   
    
    
      for(int i=0;i<n;i++)
     cout << i << " " << dis[i];

    return 0;
}
