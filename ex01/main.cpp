#include "iter.h"


int main( void ) {
    int arr[5] = {1, 2, 3, 4, 5};
    iter(arr, 5, square<int>);    
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}