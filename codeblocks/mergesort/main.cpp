/**
* http://www.practice.geeksforgeeks.org/problem-page.php?pid=700150
* http://quiz.geeksforgeeks.org/merge-sort/
**/


#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void printArray(int arr[], int array_length);
void mergeSort( int arr[], int start_index, int end_index);
void merge(int arr[], int start_index, int middle_index, int end_index );


int main()
{
  int arr[] = {12, 11, 13, 5, 6, 7};
  int array_length = sizeof(arr)/sizeof(arr[0]);
  cout << "Before sorting array input" << endl;
  printArray(arr, array_length);
  mergeSort(arr, 0, array_length -1);
  cout << "After sorting array input" << endl;
  printArray(arr, array_length);
  return 0;
}

void printArray(int arr[], int array_length) {

  for( int i =0 ; i < array_length; i++) {
    cout << arr[i] << ",";
  }
    cout << endl;
}

void mergeSort( int arr[], int start_index, int end_index) {

  if ( start_index < end_index) {
    int middle = start_index + (end_index - start_index)/2;
    mergeSort(arr, start_index, middle);
    mergeSort(arr, middle +1, end_index);
    merge(arr, start_index, middle, end_index);
  }
}

void merge(int arr[], int start_index, int middle_index, int end_index ) {

   int left_array_length = middle_index- start_index + 1;
   int right_array_length = end_index - middle_index;
   int left_array_counter =0;
   int right_array_counter = 0;
   int result_array_counter = start_index;
   int left_array[left_array_length], right_array[right_array_length];

   // copy value in left array
    for (int i =0 ; i < left_array_length; i++) {
      left_array[i] = arr[start_index + i];
    }

   // copy value in right array

   for (int i=0 ; i < right_array_length ; i++) {
    right_array[i] = arr[middle_index + 1 +i];
   }

   while (left_array_counter < left_array_length && right_array_counter < right_array_length) {
      if ( left_array[left_array_counter] <= right_array[right_array_counter] ) {
        arr[result_array_counter] = left_array[left_array_counter];
        left_array_counter++;
      } else {
        arr[result_array_counter] = right_array[right_array_counter];
        right_array_counter++;
      }
      result_array_counter++;
   }

   while ( left_array_counter  < left_array_length ) {
     arr[result_array_counter] = left_array[left_array_counter];
     left_array_counter++;
     result_array_counter++;
   }

   while (right_array_counter < right_array_length) {
    arr[result_array_counter] = right_array[right_array_counter];
    result_array_counter++;
    right_array_counter++;
   }


}
