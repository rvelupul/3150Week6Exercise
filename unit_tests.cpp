#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <fstream>
#include <vector>
#include <sstream> 

struct int_vector {
    int id;
    int x;
    int y;

    int_vector() : id(0), x(0), y(0) {}
    int_vector(int id_val, int x_val, int y_val) : id(id_val), x(x_val), y(y_val) {}
    int_vector(const int_vector& other) : id(other.id), x(other.x), y(other.y) {}
};

TEST_CASE("Testing int_vector constructor") {
    int_vector vec(1, 2, 3);
    CHECK_EQ(vec.id, 1);
    CHECK_EQ(vec.x, 2);
    CHECK_EQ(vec.y, 3);
}

TEST_CASE("Testing int_vector copy-constructor") {
    int_vector original(1, 2, 3);
    int_vector copy = original;
    CHECK_EQ(copy.id, original.id);
    CHECK_EQ(copy.x, original.x);
    CHECK_EQ(copy.y, original.y);
}

TEST_CASE("Testing file input with vectors") {
    
    std::istringstream iss("1 2\n3 4\n");
    std::vector<int_vector> vectors;
    int id = 0;
    int x, y;
    while (iss >> x >> y) {
        vectors.emplace_back(id++, x, y);
    }
    REQUIRE_EQ(vectors.size(), 2);
    CHECK_EQ(vectors[0].x, 1);
    CHECK_EQ(vectors[0].y, 2);
    CHECK_EQ(vectors[1].x, 3);
    CHECK_EQ(vectors[1].y, 4);
}

TEST_CASE("Testing file input with empty file") {
   
    std::istringstream iss("");
    std::vector<int_vector> vectors;
    int id = 0;
    int x, y;
    while (iss >> x >> y) {
        vectors.emplace_back(id++, x, y);
    }
    CHECK_EQ(vectors.size(), 0); 
}
