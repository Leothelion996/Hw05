#include hw05.h

int Sum(int *p, int k) {
int i;
int sum = 0;
for(i=0;i<k;++i) {
sum += *(p+i);
}
return sum;
}

int main() {
int *d, s;
d = new int[5];
// i n i t i a l i z e ∗d
s = Sum(d,5);
delete [] d;
return 0;
}
