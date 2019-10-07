//implementing graph using adjency list 


#include<bits/stdc++.h>
using namespace std;


class graph
{
    int V;
    list<int> *l;

    public:
    graph(int v)
    {
        V = v;
        // Array of linked lists

        l = new list<int>[V];

    }

    void addEdge(int u, int v, bool bidir = true)
    {
        l[u].push_back(v);
        if(bidir)
        {
            l[v].push_back(u);
        }
    }

    void printAdj()
    {
        for(int i=0;i<V;i++)
        {
            cout<<i<<"-";
            for(int vertex :l[i])
            {
                cout<<vertex<<",";
            }
            cout<<endl;
        }
    }


};
int main()
{
    graph g(5);
    g.addEdge(0,1,true);

    g.addEdge(0,4,true);
    g.addEdge(1,4,true);
    g.addEdge(1,3,true);
    g.addEdge(4,3,true);
    g.addEdge(1,2,true);
    g.addEdge(2,3,true);
   
   g.printAdj();

   }
