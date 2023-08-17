#include "iter.h"

int main( void ) {
    double arr[5] = {1.5, 2.5, 3.5, 4.5, 5};
    iter(arr, 5, square<double>);    
    for (size_t i = 0; i < 5; i++)
        std::cout << arr[i] << std::endl;
    return 0;
}