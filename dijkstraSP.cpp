// Implement a Monte Carlo simulation that calculates the average shortest path in a graph.
// The shortest path algorithm will be Dijkstra’s.
// The application to keep in mind is the representation of a geographical map.
// Author: Giulia Lanzillotta

#include <iostream>
#include <ctime>
#include <forward_list>
#include <array>
#include <queue>
#include <algorithm>
#include <ctime>
using namespace std;


/* About the Graph data type: 
I here represent a graph as an ARRAY of FORWARD-LISTS. 
References -------------
http://www.cplusplus.com/reference/array/array/
http://www.cplusplus.com/reference/forward_list/forward_list/
Requirements -----------
The requirements follow directly from the "application".
- The graph is un-directed
- The weights are positive
Design considerations ---------
- the choice for the representation of a graph are 2: 
    - edge lists
    - adjacency matrix
    For sparse graphs, the list approach is typically 
    more efficient, but for dense graphs, the matrix 
    approach can be more efficient (reference an Algorithm’s 
    source for space and time analysis).
- for simplicity and efficiency I use integers to 
    identify nodes (costant time access to sequential
    containers).
- TODO: support node value 
*/

template <class T, class weight> 
class graph{

    public: 
        // Default constructor. 
        // Please note that by default we build a graph of 50 nodes. 
        graph(){
            n = 50;
            this.weigths = new weight*[n];
            fill(*this.weights, *this.weights + n*n,default_value);
            this.nodes = new nodes[n];
        }
        // Build graph with no edges
        graph(int n){
            this.n = n;
            this.weigths = new weight*[n];
            fill(*this.weights, *this.weights + n*n,default_value);
            this.nodes = new nodes[n];
        }
        // Build graph and initialize edges randomly
        graph(int n, float density, int min_dist, int max_dist){
            graph(n);
            randomly_set_edges(density,min_dist,max_dist);
        }
        ~graph(){
            delete nodes;
            delete values;
        }

        // returns number of nodes in the graph
        int V(){return n;}
        // returns number of edges in the graph
        int E(){return e;}
        // tests whether there is an edge from node x to node y
        bool adjacent(int x, int y){
            return weight[x][y]!=default_value;}
        // lists all nodes y such that there is an edge from x to y.
        forward_list<int>* neighbors(int x){
            neighbs = new forward_list<int>();
            for(int i=0; i<n; i++){
                if(nodes[x][i]!=this.default_value)
                    neighbs.push_front(i);
            }
            return neighbs;
        }
        //adds to G the edge from x to y, if it is not there.
        bool add_edge(int x, int y){
            nodes[x][y] = 0; 
            this.e++;
            return true;
        }
        // removes the edge from x to y, if it is there.
        bool delete_edge(int x, int y){
            nodes[x][y] = this.default_value;
            this.e--; 
            return true;
        }
        // returns the value associated with the node x.
        T get_node_value(int x){return values[x];}
        // sets the value associated with the node x to a
        void set_node_value(int x, T a){this.values[x] = a;}
        // returns the value associated to the edge (x,y).
        weight get_edge_value(int x, int y){return weights[x,y];}
        // sets the value associated to the edge (x,y) to v
        void set_edge_value(int x, int y, weight v){weights[x,y]=v;}
 
    private:
        int n, e;
        // We use the adjacency matrix representation
        // The ij-th element of the matrix represents the 
        // edge between the two nodes, and carries its 
        // weight with it 
        weight** nodes;
        // Initial value for the edge weights.
        // The absence of an edge can be easily checked,
        // since the weigths of existing edges are supposed
        // to be non-negative 
        const weight default_value = static_cast<weight>(-1);
        // We separetly store the values of the nodes
        // Each node can be associated with some value.
        T* values;
        // Helper functions to randomly set the edges
        double prob(){
            srand(time(0)); 
            return ((double)(rand()) /RAND_MAX);
        }
        weight random_weight(weight min,weight max){
            srand(time(0)); 
            return rand()%(max-min + 1) + min;
        }
        void randomly_set_edges(float density, int min_dist, int max_dist){
        /*A procedure that produces a randomly generated 
        set of edges with positive weight.
        The procedure runs through all possible 
        undirected edges and places the edge 
        in the graph if a random probability calculation 
        is less than the density.
        Parameters ---------
        - : edge density 
        - : distance range
        */
            for(int i=0; i<n; i++){
                for(int j=i+1;i<n;i++){
                    if(prob()<=density){
                        weight edge_weight = random_weight(min_dist,max_dist);
                        nodes[i][j] = nodes[j][i] = edge_weight;
                        this.e ++;
                    } 
                }
            }
       }


};

template <class weigth>
class shortest_path{
    /*
    -dist:
    We need to mantain an array of distances: 
    for each node in the graph we save its distance from 
    the source (the weighted length of the shortest path)
    -queue: 
    We need to mantain a queue of nodes to visit: 
    -previous nodes:
    We need to mantain an array of previous nodes so that
    we can reconstruct the shortest path.
    */
    public:
        // find shortest path between u-w and returns the 
        // sequence of vertices representing shorest path 
        forward_list<int> path(int u, int v){return nullptr;}
        // return the path cost associated with the shortest path.
        weight path_size(int u, int v){return nullptr;}
    private:
        graph<int,int>* g;
        priority_queue<int> queue;

};

int main()
{
    //-----------------------------------
    // good style – choice of identifiers, 
    //short functions, good documentation, 
    //correctness and efficiency
    //-----------------------------------

    //Compute for a set of randomly generated 
    //graphs an average shortest path.

    //Use densities: 20% and 40% 
    //on a graph of 50 nodes
    //with a distance range of 1.0 to 10.0. 

    //To get an average path length, 
    //compute the 49 paths:
    //1 to 2, 1 to 3, 1 to 4, …, 1 to 50.

    //In an instance where there is no path 
    //between 1 and n, omit that value from 
    //the average. 
    //This should be very rare for the chosen 
    //  density and size in this homework
    int ** W; 
    W = new int*[10];
    W[0][2] = 3;
    cout << W[0][2] <<endl;
    cout << W[0][1];
    return 0;
}

