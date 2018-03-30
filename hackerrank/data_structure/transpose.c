/*

3 5
13 4 8 14 1
9 6 3 7 21
5 12 17 9 3

*/



#include <stdio.h>
#define MAX 10
int main() {
  int rows,cols, i, j, input[MAX][MAX];
  scanf("%d %d",&rows, &cols);
  for(i = 0;i < rows;i++ ) {
    for(j = 0;j < cols;j++) {
      scanf("%d", &input[i][j]);
    }
  }
  for(i = 0;i < cols;i++ ) {
    for(j = 0;j < rows;j++) {
      printf("%d ", input[j][i]);
    }
    printf("\n");
  }
  return 0;
}
