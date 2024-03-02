#include "vector.h"
#include <fstream>
#include <iostream>

std::vector<int_vector> read_vectors_from_file(const std::string& file_name) {
    std::ifstream in_file(filename);
    std::vector<int_vector> vectors;
    int id = 0;
    int x, y;

    while (in_file >> x >> y) {
        vectors.push_back(int_vector(id++, x, y));
    }

    in_file.close();
    return vectors;
}

void print_vectors(const std::vector<int_vector>& vectors) {
    for (const auto& vec : vectors) {
        std::cout << vec.id << ": " << vec.x << " to " << vec.y << std::endl;
    }
}

void reverse_print_vectors(const std::vector<int_vector>& vectors) {
    for (auto it = vectors.rbegin(); it != vectors.rend(); ++it) {
        std::cout << it->id << ": (" << it->x << ", " << it->y << ")" << std::endl;
    }
}
