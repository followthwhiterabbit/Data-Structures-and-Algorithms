// adjacency list in c++

#include <iostream>
#include <vector>


using namespace std; 


// adding an edge 
void addEdge(vector<int> adj[], int s, int d) // takes the vector called adj, and the index of the adjacency list, and the value to be pushed inside this list 
{
adj[s].push_back(d);  // for example, we push to our adj[0] vector the value d, so in vertex 0: we push first one, and in the adj[1] vector we push zero to show that they're connected 
adj[d].push_back(s);  
}


void printGraph(vector<int> adj[], int V)
{
	for(int d = 0; d < V; ++d) // now the second adjacency list will be printed namely adj[1] which is vertex 1
	{
	
		cout << "\nVertex " << d << ": "; 
	
	for (auto x : adj[d]) // iterate all values inside the adj[0] and print them 
		cout << "-> " << x; 
	cout << endl;  // go to the next line 

	}

}



int main()
{
	int V = 5; 
	
	// create a graph
	vector<int> adj[V]; 
	
	
	addEdge(adj, 0, 1); 
	addEdge(adj, 0, 2); 
	addEdge(adj, 0, 3); 
	addEdge(adj, 1, 2);
	addEdge(adj, 3, 5); 
	printGraph(adj, V); 
	
	 
	cout << adj[0][2] << endl; // this will give the result 3 
	
	cout << adj[0][1] << endl; // this will give the result 2

	cout << adj[0][0] << endl; // this will give the result 1
	
	
		 
	
	
	
	
	
	
	
	
}
