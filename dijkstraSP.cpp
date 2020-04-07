// Implement a Monte Carlo simulation that calculates the average shortest path in a graph.
// The shortest path algorithm will be Dijkstra’s.
// The application to keep in mind is the representation of a geographical map.
// Author: Giulia Lanzillotta

#include <iostream>
#include <ctime>
#include <forward_list>
#include <array>
#include <queue>
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
        // Set of constructors 
        // TODO: verify the correcteness of this constructor. 
        graph():n(0),nodes(nullptr),values(nullptr){}
        // returns number of nodes in the graph
        int V(){return n;}
        // returns number of edges in the graph
        int E(){return e;}
        // tests whether there is an edge from node x to node y
        bool adjacent(int x, int y){}
        // lists all nodes y such that there is an edge from x to y.
        forward_list<int> neighbors(int x){}
        //adds to G the edge from x to y, if it is not there.
        bool add_edge(int x, int y){
            // TODO: update the number of edges in the graph 
            // TODO: check whether the two nodex exist
            return false;
        }
        // removes the edge from x to y, if it is there.
        bool delete_edge(int x, int y){
            // TODO: update the number of edges in the graph 
            return false;
        }
        // returns the value associated with the node x.
        T get_node_value(int x){}
        // sets the value associated with the node x to a
        void set_node_value(int x, T a){}
        // returns the value associated to the edge (x,y).
        weight get_edge_value(int x, int y){}
        // sets the value associated to the edge (x,y) to v
        void set_edge_value(int x, int y, weight v){}
 
    private:
        int n, e;
        forward_list<int>* nodes;
        T* values;
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
        */}


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
        forward_list<int> path(int u, int v){}
        // return the path cost associated with the shortest path.
        weight path_size(int u, int v){}
    private:
        graph* g;
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
}

