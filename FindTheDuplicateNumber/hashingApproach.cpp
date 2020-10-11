#include<bits/stdc++.h>
#include "allheaders.h"

using namespace std;

int getDuplicateAfterHashing(int inputArray[], int arraySize) {

    for (int i =0; i < arraySize ; i++) {
        inputArray[ inputArray[i] % arraySize] = inputArray[inputArray[i] % arraySize] + arraySize;
    }

    cout << "The repeating elements are\n";
    for(int i = 0; i < arraySize ; i++) {
        if (inputArray[i] > 2*arraySize) {
            cout << i << " " << endl;
        }
    }
    return 0;
}
