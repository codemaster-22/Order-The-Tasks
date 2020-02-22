#ifndef GRAPH_H 
#define GRAPH_H
#include "Node.h"
class Graph
{
    public:
    int n;
    vector<Node*> arr;
    void sort();
    vector<int> output();
    Graph(int x);
};
#endif
