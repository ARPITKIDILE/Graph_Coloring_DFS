#include<bits/stdc++.h> 
using namespace std; 
class Graph 
{ 
	int V;
	list<int> *adj; 
	void DFSUtil(int v, bool visited[]); 
public:
	Graph(int V);
	void addEdge(int v, int w); 
    unordered_map<int,int>color;
    unordered_map<int,int>status;
	void DFS(int v); 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	    adj[v].push_back(w);
	    adj[w].push_back(v);
	    color[v]=-1;
	    color[w]=-1;
}
void Graph::DFSUtil(int v,bool visited[]) 
{ 
	visited[v]=true; 
    if(color[v]==-1){
        set<int> status;
        for (auto x : adj[v]){
            if(color[x]!=-1){
                status.insert(color[x]);
            }        
        }
        int val=1;
        for(auto itr=status.begin();itr!=status.end();itr++){
            if(*itr!=val){
                break;
            }
            val++;
        }
        color[v]=val;
    }
    cout <<v<<"     ==>     "<<color[v]<<endl;
	list<int>::iterator i; 
	for (i=adj[v].begin();i!=adj[v].end();++i) 
		if (!visited[*i]) 
			DFSUtil(*i, visited); 
} 
void Graph::DFS(int v) 
{ 
	bool *visited=new bool[V]; 
	for(int i=0;i<V;i++){
		visited[i]=false;
	}
	DFSUtil(v, visited); 
} 
int main() 
{  
    int n,a,b,t,st;
    cout<<"Enter no. of nodes"<<endl;
    cin>>n;
    Graph g(n);
    cout<<"Enter no. of edges"<<endl;
    cin>>t;
    cout<<"Enter edges as (a,b)"<<endl;
    while(t--){
        cin>>a>>b;
        g.addEdge(a,b);
     }
    cout<<"Enter the starting node for coloring"<<endl;
    cin>>st;
 	cout<<"OUTPUT IS"<<endl;
	cout<<endl;
	cout<<"EDGE        COLOR"<<endl;
	g.DFS(st); 
	return 0; 
} 
