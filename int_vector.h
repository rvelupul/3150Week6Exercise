#ifndef INT_VECTOR_H
#define INT_VECTOR_H

struct int_vector {
    int id;
    int x;
    int y;

    int_vector();

    int_vector(int id, int x, int y);

    int_vector(const int_vector& other);
};

#endif 
