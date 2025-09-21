#include <stdio.h>
 
int main() {
 
    double A,B,C,P,Q,R,S,T;
    scanf("%lf%lf%lf", &A, &B, &C);
    P=0.5*A*C;
    Q=3.14159*C*C;
    R=((A+B)/2)*C;
    S=B*B;
    T=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",P,Q,R,S,T);
 
    return 0;
}
