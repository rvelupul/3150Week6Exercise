#ifndef VECTOR_H
#define VECTOR_H

#include "int_vector.h"
#include <vector>
#include <string>

std::vector<int_vector> read_vectors_from_file(const std::string& file_name);

void print_vectors(const std::vector<int_vector>& vectors);

void reverse_print_vectors(const std::vector<int_vector>& vectors);

#endif 
