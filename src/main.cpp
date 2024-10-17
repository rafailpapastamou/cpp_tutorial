/// main.cpp
#include "vector_math.h"
#include <vector>

int main() {
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{6, 7, 8, 9, 10};
    std::vector<int> vec3 = sum_vecs(vec1, vec2);

    // print the resulting vector
    print_vec(vec3);
    
    return 0;
}