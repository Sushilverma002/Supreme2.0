#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <stack>
#include <limits.h>
using namespace std;

class Graph{
    public:
        unordered_map<int,list<int>> adjList;
        void addEdge(int u m int v, bool direction){
            if (direction   ==0)
            {
                adjList[u].push_back(v);
                adjList[v].push_back(u);

                /* code */
            }else{
                adjList[u].push_back(v);
            }
        }
        
};
