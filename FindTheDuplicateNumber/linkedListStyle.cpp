#include<bits/stdc++.h>
#include "allheaders.h"

int getDuplicateUsingLinkedListCycle(int inputArray[], int arraySize) {

    int slow = inputArray[0];
    int fast = inputArray[0];
    do {
        slow = inputArray[slow];
        fast = inputArray[inputArray[fast]];
    } while ( slow != fast);

    int ptr1 = inputArray[0];
    int ptr2 = slow;
    while (ptr1 != ptr2) {
        ptr1 = inputArray[ptr1];
        ptr2 = inputArray[ptr2];
    }

    return ptr1;
}


