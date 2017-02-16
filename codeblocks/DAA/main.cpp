/*
*   http://quiz.geeksforgeeks.org/binary-search/
*   https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/
*   http://www.practice.geeksforgeeks.org/problem-page.php?pid=700238
*/

#include <iostream>

using namespace std;
int binSearchRecursive(int [], int, int, int );
int binSearchIterative(int [], int, int , int);
int main()
{
    int target_arr[] = {2, 3, 4, 5, 6,7, 8};
    int  length_of_array = sizeof(target_arr)/sizeof(target_arr[0]);
    int  to_find = 6;
    int result = binSearchIterative(target_arr, 0, length_of_array - 1, to_find);
    if ( result != -1) {
      cout << "found " << to_find << 'at ' << result << endl;
    } else {
      cout << "Please try again! Didn't find " << to_find << "In the list of arrays" << endl;
    }
    return 0;
}

// recursive binary search implementation
/*You need to complete this function */

int binSearchRecursive(int search_space[], int start_index, int end_index, int to_find)
{
  if ( end_index >= start_index) {
    int mid = start_index + (end_index - start_index)/2;

    if ( search_space[mid] == to_find) {
      return mid;
    }

    if (search_space[mid] > to_find) {
      return binSearchRecursive(search_space, start_index, mid -1 , to_find);
    } else {
      return binSearchRecursive(search_space, mid + 1, end_index, to_find);
    }

  }
   return -1;
}

// binary search interative

int binSearchIterative(int search_space[], int start_index, int end_index, int to_find) {
  int mid ;
  while ( start_index <= end_index) {
    mid = start_index + (end_index - start_index)/2;

    if ( search_space[mid] == to_find) {
      return mid;
    }

    if ( search_space[mid] < to_find) {
      start_index = mid + 1;
    } else {
       end_index = mid -1;
    }
  }
  return -1;
}
