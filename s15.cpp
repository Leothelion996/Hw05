#include "hw05.h"

int Sum(int *p, int k) {
int i;
int sum = 0;
for(i=0;i<k;++i) {
sum += *(p+i);
}
return sum;
}

int main() {
int d[5];
int s;
// i n i t i a l i z e d [ ]
s = Sum(d,5);
std::cout << "s: " << s;
return 0;
}