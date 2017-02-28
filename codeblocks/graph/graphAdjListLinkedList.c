// a c program to demonstrate adjacency list of representation of graphs
// referring http://www.geeksforgeeks.org/graph-and-its-representations/
#include <stdio.h>
#include <stdlib.h>

// structure to represent an adjacency list node
struct AdjListNode {
  int dest;
  struct AdnListNode *next; 
}


// structure to represent an adjacency list
struct AdjList {
  struct AdjListNode *head;
}


// A structure to represent a graph. A graph is an array of adjacency lists.
// Size of array will be V (number of vertices in graph)
struct Graph {
  int V;
  struct AdjList* array;
}

// A utility function to create a new adjacency list node
struct AdjListNode * newAdjListNode(int dest) {
  struct AdjListNode * newNode = (struct *)malloc(sizeof(struct AdjListNode));
  newNode->dest = dest;
  newNode->next = null;
  return newNode;
}


// a utility function that creates graph of V vertices

struct Graph* createGraph( int V) 
{
  struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph)); 
  graph->V = V;
  graph->array = (struct AdjList)malloc(V * sizeof(struct AdjList));
  int i =0;

  for(i =0; i < V; ++i) {
    graph->array[i].head = NULL;
  }
}


// Adds an edge to an undirected graph
void addEdge(struct Graph* graph, int src, int dest) 
{
  // Add an edge from src to dest. A new node  is added to the adjacency  
  // list of src. The node is added at the begining.

  struct AdjListNode * newNode = newAdjListNode(dest);
  newNode->next = graph->array[src].head;
  graph->array[src].head = newNode;

  newNode = newAdjListNode(src);
  newNode->next = graph->array[dest].head;
  graph->array[dest].head = newNode;
}

// A utility function to print the adjacency list representation of graph

void printGraph(struct Graph *graph) 
{
  int v;
  for ( v = 0; v < graph->V; ++v) {
    struct AdjListNode* pCrawl = graph->array[v].head;
    printf("\n Adjacency list of vertex %d\n head ", v);
    while(pCrawl) {
      printf("-> %d\n", pCrawl->dest );
      pCrawl = pCrawl->next;
    }
    printf("\n");
  }
}

// Driver program to test above functions
int main()
{
  int V = 5;
  struct Graph *graph = createGraph(V);
  addEdge(graph, 0, 1);
  addEdge(graph, 0, 4);
  addEdge(graph, 1, 2);
  addEdge(graph, 1, 3);
  addEdge(graph, 1, 4);
  addEdge(graph, 2, 3);
  addEdge(graph, 3, 4);

  printGraph(graph);
  return 0;
}