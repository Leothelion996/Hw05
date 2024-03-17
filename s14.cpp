#include "hw05.h"

int Sum(int A[5]) {
  int i;
  int sum = 0;
  for(i=0;i<5;++i) {
    sum += A[i];
  }
  return sum;}

int main() {
int d[5];
int s;
// i n i t i a l i z e d [ ]
s = Sum(d);
std::cout << "s: " << s;
return 0;}