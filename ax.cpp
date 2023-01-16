#include <iostream>
#include "ax.h"

void Ax::printArray(int* arr, int s){
    std::cout << "[";
    for(int i = 0; i < s; i++){
        std::cout << ((i != s-1)? std::to_string(arr[i]) + ", " : std::to_string(arr[i]) + "]\n");
    }
};
