/// vector_helpers.cpp
#include "vector_math.h"
#include <iostream>

void print_vec(std::vector<int> const &vec) {
    int size = vec.size();
    for(int i = 0; i < size; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
}