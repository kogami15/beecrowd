#include <stdio.h>
 
int main() {
 
    int A,B,X,Y;
    double C,Z,D;
    scanf("%d%d%lf", &A, &B, &C);
    scanf("%d%d%lf", &X, &Y, &Z);
    D=B*C+Y*Z;
    printf("VALOR A PAGAR: R$ %.2lf\n",D);
 
    return 0;
}
