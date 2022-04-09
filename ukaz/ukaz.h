#ifndef UKAZ_H
#define UKAZ_H
#include <iostream>
using namespace std;
void reverse(int* a, int size);
void nvz(int* a, int size);
void voz(int* a, int size);
void ran(int* a, int size);
void cik(int* a, int size);
void(*fun(int* x, int size))(int* x, int size);
void map(int* arr, unsigned size, int(*fun)(int));
int map(int* arr, unsigned size, int(*fun)(int, int));
#endif