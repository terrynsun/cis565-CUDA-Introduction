#pragma once

#include <glm/glm.hpp>

int dev_init();
void dev_free();
void hst_init(float **a, float **b, float **c);
void hst_free(float *a, float *b, float *c);
void cudaAdd(float *a, float *b, float *c);
void cudaSub(float *a, float *b, float *c);
void cudaMul(float *a, float *b, float *c);
