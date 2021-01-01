#include<iostream>
#include<vector>

using namespace std;

void bfs(vector< vector<int> > &graph,int &ch ,int s,int v ){
    //ch = 0 initially
    vector<int>que;
    que.push_back(s);
    int n = graph.size();
    vector<int>chek(n+1);
    for(int i = 0;i<n+1;i++){
        chek[i]=0;
    }
    chek[s]=1;
    while(que.size()!=0){
        int b = que[0];
        // cout<<b<<" : "<<endl;
        vector<int>::iterator itr;
        itr = que.begin();
        que.erase(itr);
        for(int i = 0;i<graph[b].size();i++){
            if(chek[graph[b][i]]==0){que.push_back(graph[b][i]);
            chek[graph[b][i]]=1;}
            if(graph[b][i]==v){ch = 1;}
        }
    }


}

int main()
{
    int n,k;
    cin>>n>>k;

    vector<vector<int>> graph(n+1);
    
    for(int i = 0;i<=n;i++){
        graph[i]= vector<int>(0);
    }


    for(int i = 0;i<k;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int u,v;
    cin>>u>>v;

    for(int i = 0;i<=n;i++){
        // cout<<i<<":=>";
        for(int j = 0;j<graph[i].size();j++){
            // cout<<graph[i][j]<<":";
        }
        // cout<<endl;
    }
    int ch = 0;
    bfs(graph,ch,u,v);
    cout<<ch<<endl;

    return 0;
}