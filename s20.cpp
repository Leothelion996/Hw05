#include hw05.h

int Sum(int **p,int r,int c) {
int j, k, sum = 0;
for(j=0;j<r;++j) {
for(k=0;k<c;++k) {
sum += *(*(p+j)+k);
}
}
return sum;
}

int main() {
int **d, s, i;
d = new int*[5];
for(i=0;i<5;++i)
d[i] = new int[8];
s = Sum(d,5,8);
for(i=0;i<5;++i)
delete [] d[i];
delete [] d;
}