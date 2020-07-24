#include <iostream>

using namespace std;

const int NMAX = 10005;

bool visitedMatrix[NMAX][NMAX];
char plotMatrix[NMAX][NMAX];
int numberOfRows, numberOfColumns;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1,0, -1};

bool isValidPlot(int row, int column) {
  if ( row > numberOfRows  || row < 1 || column > numberOfColumns || column < 1 )
    return false;
  if (plotMatrix[row][column] == '#' || visitedMatrix[row][column])
    return false;
  return true;

}


void fillAlgorithm(int row, int column, int &numberOfCells){
  numberOfCells++;
  visitedMatrix[row][column] = true;
  for(int i =0 ;i < 4; i++) {
    if (isValidPlot(row + dx[i], column + dy[i])) {
      fillAlgorithm(row +dx[i], column + dy[i], numberOfCells);
    }
  }
}

int main()
{
  int islandsInPlot=0, maxCellInIsland=0;
  cin >> numberOfRows >> numberOfColumns;

  for(int i=1;i <= numberOfRows; i++)
    for(int j=1; j <= numberOfColumns;j++)
      cin >> plotMatrix[i][j];

  for(int i=1;i <= numberOfRows; i++)
    for(int j=1; j <= numberOfColumns;j++) {
      if (isValidPlot(i, j)) {
        islandsInPlot++;
        int numberOfCells=0;
        fillAlgorithm(i,j, numberOfCells);
        maxCellInIsland = max(maxCellInIsland, numberOfCells);
      }

    }

    cout << islandsInPlot << " " << maxCellInIsland << "\n";

  return 0;
}
