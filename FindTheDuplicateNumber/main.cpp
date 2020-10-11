#include <iostream>
#include <bits/stdc++.h>
#include "allheaders.h"


using namespace std;
const int NMAX = 10001;
int inputArray[NMAX], arraySize;

int main()
{
    cout << "Please insert array size" << endl;
    cin >> arraySize;
    cout << "Please insert the array for size - " << arraySize << endl;
    for(int i = 0;i < arraySize; i++) {
        cin >> inputArray[i];
    }

    cout << "Duplication found with sorting approach" << endl;
    cout << getDuplicateAfterSorting(inputArray, arraySize);


    cout << "\nDuplication found with hashing approach" << endl;
    cout << getDuplicateAfterHashing(inputArray, arraySize) ;

    cout << "\n Duplication found using linked list cycle method" << endl;
    cout << getDuplicateUsingLinkedListCycle(inputArray, arraySize);
    return 0;

}
