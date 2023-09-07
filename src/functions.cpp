#include "include/functions.h"
#include <numeric>
#include <vector>
//#include <iostream>

namespace func {
    int sum_multiples_in_vector(std::vector<int> range) {
        //Multiplicity constants.
        const int a = 3;
        const int b = 5;

        //Vector to hold valid multiples as determined by is_divisible() and the multiplicity constants.
        std::vector<int> valid_multiples;

        //Finding all multiples of a and b.
        for (int i = 0; i < static_cast<int>(range.size()) - 1; i++) {
            if (is_divisible(range[i], a) || is_divisible(range[i], b)) {
                //std::cout << "Multiple is: " << range[i] << '\n';
                valid_multiples.push_back(range[i]);
            }
        }

        //Return sum of multiples.
        return std::accumulate(valid_multiples.begin(), valid_multiples.end(), 0);
    }

    bool is_divisible(int numerator, int denominator) {
        int remainder = numerator % denominator;
        if (remainder == 0) {
            return true;
        } else {
            return false;
        }
    }
}