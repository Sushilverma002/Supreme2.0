#include <iostream>
#include <map>
#include <unordered_map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
class Graph{
    public:
        unordered_map<int , list<int> > adj;
    
    void addEdge(int u, int v, bool direction){
        // direction 1-> directed
        // direction 0-> undirected
        if(direction==1){
            adj[u].push_back(v);
        }else{
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i:adj){
            cout<<"first"<<":{";
            for(auto j:i.second){//i.second->edj list ke second column ke liye
                cout<<j<<",";
            }
            cout<<"}"<<endl;
        }
    }

    void topSortDfs(int src, map<int,bool>& visited,stack<int>&st){
        visited[src]=true;

        for(auto nbr:adj[src]){
            if(!visited[nbr]){
                topSortDfs(nbr, visited,st);
            }
        }
        st.push(src);
    }

    void topSortBFs(int n , vector<int>&topOrder){
        queue<int>q;
        map<int,int>indegree;

        //initialise kardi indegree
        for(auto i: adj){
            for(auto nbr:i.second){
                indegree[nbr]++;
            }
        }
        //push all zero indegree wali node into queue
        for(int node=0; node<n; node++){
            if(indegree[node]==0){
                q.push(node);
            }
        }

        //BFS chalate hai
        while(!q.empty()){
            int frontNode= q.front();
            q.pop();
            topOrder.push_back(frontNode);

            for(auto nbr:adj[frontNode]){
                indegree[nbr]--;

                //check for zero 
                if(indegree[nbr] ==0){
                    q.push(nbr);
                }
            }
        }
    }
    
	void shortestPathBfs(int src, int dest) {
		queue<int> q;
		map<int,bool> visited;
		map<int,int> parent;

		//initial state
		q.push(src);
		visited[src] = true;
		parent[src] = -1;

		while(!q.empty()) {
			int frontNode = q.front();
			q.pop();

			for(auto nbr: adj[frontNode]) {
				if(!visited[nbr]) {
					q.push(nbr);
					parent[nbr] = frontNode;
					visited[nbr] = true;
				}
			}
		}

		//parent array tyaar hoga 
		vector<int> ans;
		while(dest != -1) {
			ans.push_back(dest);
			dest = parent[dest];
		}

		reverse(ans.begin(), ans.end());
		//printig the shortest path
		for(auto i: ans) {
			cout << i <<" ";
		}
		
	}
};


int main(){
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(2,4,1);
    g.addEdge(3,5,1);
    g.addEdge(4,5,1);
    g.addEdge(5,6,1);
    g.addEdge(6,7,1);
    
    g.printAdjList();
    int n =8;
    vector<int>topOrder;
    g.topSortBFs(n,topOrder);

    cout<<"Priting the top ordering: "<<endl;
    for(auto i:topOrder){
        cout<<i<<endl;
    }


    // int n=8;
    // map<int,bool> visited;
    // stack<int>st;
    // for(int node=0; node<n;node++){
    //     if(!visited[node]){
    //         g.topSortDfs(node, visited,st);
    //     }
    // }
    // cout<<"printing the topo order :"<<endl;
    // while(!st.empty()){
    //     cout<<st.top();
    //     st.pop();
    // }
    return 0;
}