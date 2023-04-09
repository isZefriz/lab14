//
// Created by user on 09.04.2023.
//

#ifndef LAB14_VECTOR_H
#define LAB14_VECTOR_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct vector {
    int *data;        // указатель на элементы вектора
    size_t size;      // размер вектора
    size_t capacity;  // вместимость вектора
} vector;

vector createVector(const size_t n);
void reserve(vector *v, const size_t newCapacity);
void clear(vector *v);
void deleteVector(vector *v);
bool isEmpty(const vector *v);
bool isFull(const vector *v);
int getVectorValue(const vector *v, const size_t i);
void pushBack(vector *v, const int x);
void popBack(vector *v);

#endif //LAB14_VECTOR_H
