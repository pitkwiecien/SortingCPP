#include <iostream>
#include <string>

#include "ax.h"
#include "srt.h"

using namespace std;

int main()
{
    Srt srt;
    Ax ax;
    int arr[] = {531,34124,1231,321,12,1,45,-3};
    int s = sizeof(arr)/sizeof(int);

    srt.mergeSort(arr, 0, s-1);
    ax.printArray(arr, s);
    return 0;
}
