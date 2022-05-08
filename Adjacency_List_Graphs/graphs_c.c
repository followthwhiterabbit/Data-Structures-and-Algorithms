// Adjacency list with c language 
#include <stdio.h>
#include <stdlib.h>



// struct for adjacency list node 

struct Adjlistnode	// the structure that holds the value of the destination and the Adjlistnode type pointer variable that points to another node in the list 
	{
		int dest;  // you push back the destination as an int variable 
		struct Adjlistnode* next;  // pointer to the next node 
	}; 
	
	
struct Adjlist // the structure to represent an adjacency list 
	{
		struct AdjListNode* head; // head variable holds the address of the first element of the adjacency list 
	}; 								// and it points to a struct of AdjListNode
	
	
struct Graph // the structure of Graph which holds the number of verices and the Adjlist type of array pointer, it actually points to different adjacent lists 
	{
		int V; // number of vertices 
		struct Adjlist* array; // array[src] will point to different adjlists 
		
	}; 
	
	
// a utility function to create a new adjacency list node 
struct Adjlistnode* newAdjlistnode(int dest) // it creates a different or new adjlistnode and the value hold inside the node 
{
	struct Adjlistnode* newNode = (struct Adjlistnode*)malloc(sizeof(struct Adjlistnode)); 
	newNode->dest = dest; 
	newNode->next  = NULL; 
	
	return newNode; 
	
}


// a utility function that creates a graph of V vertices 
struct Graph* createGraph(int V) // create a graph with V vertices, points to a  Graph type object 
{
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph)); // 
	graph->V = V; 
	
	// create an array of adjacency lists. Size of array will be V 
	graph->array = (struct Adjlist*)malloc(V * sizeof(struct Adjlist)); 
	
	// initialize each adjacency list as empty by making head as NULL 
	int i; 
	for (i = 0; i < V; i++)
		graph->array[i].head = NULL; 	
		
		
		return graph; 
	
}


// Adds an edge to an undirected graph 
void addEdge(struct Graph* graph, int src, int dest)
{
	// add an edge from src to dest.
	// a new node is added to the adjacency list of src. 
	// the node is added at the beginning 
	struct Adjlistnode* check = NULL; 
	struct Adjlistnode* newNode = newAdjlistnode(dest);
	
	
	if (graph->array[src].head == NULL)
		{
			newNode->next =  graph->array[src].head; 
			graph->array[src].head = newNode; 
		}
	else 
		{
			check = graph->array[src].head; 
			while (check->next != NULL)
				check = check->next; 
		check->next = newNode; 	
		}
		
		
	// graph is undirected, we add and edge from dest to source as well 
	newNode = newAdjlistnode(src); 
	if(graph->array[dest].head == NULL)
	{
		newNode->next = graph->array[dest].head; 
		graph->array[dest].head = newNode; 
		
	}
	else
	{
		check = graph->array[dest].head; 
		while(check->next != NULL)
			{
				check = check->next; 
				
			}
			check->next = newNode; 
	}
		
		
		
}


void printGraph(struct Graph* graph)
{
	int v; 
	for (v = 0; v < graph->V; ++v)
		{
			struct Adjlistnode* trvrs = graph->array[v].head; // for every adjacency list we hold the address of the vertex 
			printf("\n Adjacency list of vertex %d\n head ", v); 
			while(trvrs)
				{
					printf("-> %d", trvrs->dest); 
					trvrs = trvrs->next; 
				}
				printf("\n"); 
		}
	
}




int main()
{
	
	int V = 5; 
	
	struct Graph* graph = createGraph(V); 
	
  	addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
	
	
	printGraph(graph); 
	
	
	
	
	
	
	
	
	
}






























	
	

	
	
	
	
