#include hw05.h

int Sum(int A[][8]) {
int i, j, sum = 0;
for(i=0;i<5;++i) {
for(j=0;j<8;++j) {
sum += A[i][j];
}
}
return sum;
}

int main() {
int d[5][8];
int s;
// i n i t i a l i z e ∗d
s = Sum(d);
...
...
return 0;
}