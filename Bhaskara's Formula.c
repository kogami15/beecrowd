#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,D,X,Y;
    scanf("%f%f%f",&A,&B,&C);
    D=(pow(B,2)-4*A*C);
    if(A==0){
            printf("Impossivel calcular\n");
    }
    else if (D>0){
            X=(-B+sqrt(D))/(2*A);
            Y=(-B-sqrt(D))/(2*A);
            printf("R1 = %.5f\nR2 = %.5f\n",X,Y);
    }
    else if(D==0){
        X=(-B+sqrt(D))/(2*A);
        printf("R1 = %.5f\nR2 = %.5f\n",X,X);
    }
    else{
            printf("Impossivel calcular\n");
    }
    return 0;

}
