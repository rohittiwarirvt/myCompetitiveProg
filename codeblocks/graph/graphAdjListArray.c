// referring http://www.sanfoundry.com/c-program-represent-graph-adjacency-matrix/
//  A Program to represent a Graph by using an Adjacency Matrix method.
#include <stdio.h>
#include <stdlib.h>

void dir_graph();
void undir_graph();

void main()
{
  int option;

  do
  {
    printf("\n A Program  to represent a Graph by using an ");
    printf("Adjacency Matrix method\n");
    printf("\n 1. Directed Graph");
    printf("\n 2. Un-Directed Graph");
    printf("\n 3. Exit ");
    printf("\n\n Select a proper option");
    scanf("%d", &option);
    switch(option){
      case 1:
        dir_graph();
        break;
      case 2:
        undir_graph();
        break;
      case 3:
          exit(0);
        break;
      default:
        printf("Please select a valid choice\n");
    }
  }
}

void dir_graph()
{
  
}

void undir_graph()
{

}