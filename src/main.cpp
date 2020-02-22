#include "../include/Graph.h"
#include "../include/Node.h"
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e;
        cin>>n>>e;
        Graph G(n);
        for(int i=0;i<n;++i)
        {
            Node* ptr=new Node(i,0);
            G.arr.push_back(ptr);
        }
        int a,b;
        while(e--)
        {
            cin>>a>>b;
            if(a>=n||b>=n)
                continue;
            G.arr[a]->V.push_back(b);
            G.arr[b]->indegree++;
        }
        G.sort();
        vector<int> V=G.output();
        if(V.size()==0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(auto it:V)
            {
                cout<<it<<" ";
             }
            cout<<endl;
        }
    }
    return 0;
}
