#include <iostream>
#include "srt.h"

void Srt::bubbleSort(int* arr, int s, bool dec){
    for(int i=1; i < s; i++){
        for(int j=0; j < s-i+1; j++){
            if((dec && arr[j] > arr[j-1]) || (!dec && arr[j] < arr[j-1])){
                int tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
            }
        }
    }
}
1
void mergeArr(int* arr, int low, int center, int high){
    int subArr1Length = center - low + 1;
    int subArr2Length = high - center;
    int sortedArr[];
    int *stLeft = arr + low;
    int *stRight = arr + center + 1;
    int i1 = 0;
    int i2 = 0;
    while(i1 < subArr1Length || k2 < subArr2Length){
        if(i1 >= subArr1Length){
            sortedArr[i1 + i2] = stRight[i2];
            i2++;
        } else if(i2 >= subArr2Length) {
            sortedArr[i1 + i2] = stLeft[i1];
            i++;
        } else if(stLeft[i1] < stRight[i2]){
            sortedArr[i1 + i2] = stLeft[i1];
            i1++;
        } else {
            sortedArr[i1 + i2] = stRight[i2];
            i2++;
        }
    }
    for(int i = low; i <= finish; i++){
        arr[i] = sortedArr[i-low];
    }
}

void Str::mergeSort(int* arr, int size, int low, int high){
    if(low == high)
        return;
    int center = (high+low)/2;
    mergeSort(low, center);
    mergeSort(center+1, high);
    mergeArr(arr, low, center, high);
}
