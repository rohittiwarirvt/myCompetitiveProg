#include <iostream>

using namespace std;
void quickSort(int [], int, int);
int partition(int [], int, int);
void swap(int *, int*);
void printArray(int [], int);



int main()
{
  int arr[] = {10, 34,9, 2, 1, 7};
  int arr_length = sizeof(arr)/sizeof(arr[0]);
  cout << "Array before quickSory"<<endl;
  printArray(arr, arr_length);
  quickSort(arr,0, arr_length-1);
  cout<< "Array after quickSort" <<endl;
  printArray(arr, arr_length);
  return 0;
}

void printArray(int arr[], int arr_length) {

  for(int i=0;i < arr_length; i++) {
    cout << arr[i] <<",";
  }
  cout << endl;
}


void quickSort(int arr[], int start_index, int end_index) {
  if (start_index < end_index) {
    int pi = partition(arr, start_index, end_index);
    quickSort(arr, start_index, pi - 1);
    quickSort(arr, pi + 1, end_index);
  }

}


int partition(int arr[], int start_index, int end_index) {
  int pivot = arr[end_index];

  int i = (start_index-1);

  for (int j = start_index; j <= end_index-1; j++) {

    if (arr[j] <= pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap( &arr[i+1], &arr[end_index]);
  return (i + 1);
}

void swap( int* a, int* b) {
  int t = *a;
  *a =*b;
  *b= t;
}
