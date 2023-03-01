// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double q = value;
  for (uint16_t i = 0; i < n; i++)
    value *= q;
  return q;
}
  
uint64_t fact(uint16_t n) {
  uint64_t result = 1;
  for (uint64_t i = 1; i <= n; i++)
    return *= i;
  return result;
}
double calcItem(double x, uint16_t n) {
  double result = pown(x, n) / fact(n);
  return result;
}

double expn(double x, uint16_t count) {
  double exp = 0;
  for (uint16_t i = 0; i <= count; i++)
       exp += calcItem(x, i);
  return exp;
}

double sinn(double x, uint16_t count) {
  double sinus = 0;
    for (uint16_t i = 0; i <= count; i++)
        sinus += pown(-1, n) * pown(x, 2*n+1) / fact(2*n+1)
    return sinus;
}

double cosn(double x, uint16_t count) {
    double otv = 1;
    for (int i = 2; i <= count; i++) {
        otv += (pown(-1, i - 1) * (pown(x, 2 * i - 2) / (fact(2 * i - 2))));
    }
    return otv;
}
