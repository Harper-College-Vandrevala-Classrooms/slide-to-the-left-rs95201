#include <iostream>
#include "left.hpp"
#include <cassert>

int main()
{
    int original[] = {1, 2, 3, 4, 5};
    int size = 5;
    int arr[size];

    int result1[] = {1, 2, 3, 4, 5};  
    int result2[] = {2, 3, 4, 5, 1};  
    int result3[] = {1, 2, 3, 4, 5};  
    int result4[] = {2, 3, 4, 5, 1};  
    int result5[] = {1, 2, 3, 4, 5};  
    int result6[] = {5, 1, 2, 3, 4};  


    reset_array(arr, original, size);
    array_shift(arr, size, 0);
    for (int i = 0; i < size; ++i) {
        assert(arr[i] == result1[i]);
    }
    
    reset_array(arr, original, size);
    array_shift(arr, size, 1);
    for (int i = 0; i < size; ++i) {
        assert(arr[i] == result2[i]);
    }
    
    reset_array(arr, original, size);
    array_shift(arr, size, 5);
    for (int i = 0; i < size; ++i) {
        assert(arr[i] == result3[i]);
    }
    
    reset_array(arr, original, size);
    array_shift(arr, size, 16);
    for (int i = 0; i < size; ++i) {
        assert(arr[i] == result4[i]);
    }
    
    reset_array(arr, original, size); 
    array_shift(arr, size, -9);
    for (int i = 0; i < size; ++i) {
        assert(arr[i] == result5[i]);
    }
    
    reset_array(arr, original, size);
    array_shift(arr, size, 34);
    for (int i = 0; i < size; ++i) {
        assert(arr[i] == result6[i]);
    }
    
    
    std::cout << "All tests passed!" << std::endl;

    return 0;
}
