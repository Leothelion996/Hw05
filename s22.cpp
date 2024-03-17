#include "hw05.h"

int Sum(int *p,int r,int c) {
int j, k, sum = 0;
for(j=0;j<r;++j) {
for(k=0;k<c;++k) {
sum += *(p+j*c+k);
}
}
return sum;
}

int main() {
int *d, s;
d = new int[5*8];
if (!d) return -1;
// ...
s = Sum(d,5,8);
delete [] d; // yes !
return 0;
}