#include <bits/stdc++.h>
#include "allheaders.h"
using namespace std;

int getDuplicateAfterSorting( int nums[], int arraySize) {

    sort( nums, nums + arraySize);
    for(int i = 0;i < arraySize; i++) {
        if ( nums[i] == nums[i-1]) {
            return nums[i];
        }
    }

    return 0;
}
