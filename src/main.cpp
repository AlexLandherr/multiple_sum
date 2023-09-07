#include <iostream>
#include <numeric>
#include <vector>
#include "include/functions.h"

/*
All integers under 10 that are multiples of 3 or 5 are 3 5 6 9.

The sum of these is 23. What is the sum of the multiples of 3 or 5 below 1000?
*/

int main() {
    //Initialize vector with size 1000 and then fill it with all ints in range 1-1000.
    std::vector<int> search_vector(1000);
    std::iota(search_vector.begin(), search_vector.end(), 1);

    //Printout with result.
    std::cout << "The sum of all multiples of 3 or 5 below 1000 is: " << '\n';
    std::cout << func::sum_multiples_in_vector(search_vector) << '\n';

    /* //Test printout (for 10 elements only!).
    for (int i : search_vector) {
        std::cout << i << '\n';
    } */

    return 0;
}