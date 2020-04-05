// Implement a Monte Carlo simulation that calculates the average shortest path in a graph.
// The shortest path algorithm will be Dijkstra’s.
// The application to keep in mind is the representation of a geographical map.
// Author: Giulia Lanzillotta

#include <iostream>
#include <ctime>
#include <forward_list>
#include <array>
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
    The implementation that follows uses the edge list
    representation of a graph because Dijkstra's algorithm 
    requires to visit the graph by following the edges 
    starting from one initial node. To get the next node
    in an edge-list representation costs 1, while in an 
    adjacency matrix representation it would cost m, where m
    is the number of nodes that come before the next one 
    in the list of nodes of the graph. 
- for simplicity and efficiency I use integers to 
    identify nodes (costant time access to sequential
    containers).
*/


class graph{
    public: 
    // Set of constructors 
    // TODO: verify the correcteness of this constructor. 
    graph():n(50),nodes(new forward_list<int>[50]){}

    private:
    int n;
    forward_list<int>* nodes;
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


};

class priority_queue{
    public:
    private:
};

class shortest_path{
    public:
    private:
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

