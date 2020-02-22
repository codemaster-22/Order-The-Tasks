#include "../include/Graph.h"
#include "../include/Node.h"

void Graph::sort()
{ 
    for(auto it:arr)
    {
        std::sort((it->V).begin(),(it->V).end());
    }
}
vector<int> Graph::output()
{   
    vector<int> out;
    vector<int> q;
    for(auto it:arr)
    {
        if(it->indegree==0)
            q.push_back(it->val);
    }
    while(q.size())
    {
        int t=q[0];
        q.erase(q.begin());
        out.push_back(t);
        for(auto it:arr[t]->V)
        {
            arr[it]->indegree--;
            if(arr[it]->indegree==0)
                q.push_back(it);
        }
        std::sort(q.begin(),q.end());
    }
    if(out.size()!=n)
        out.clear();
    return out;
}
