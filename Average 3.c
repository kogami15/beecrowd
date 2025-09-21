#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,A,X,Y;
    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
    A=((N1*2)+(N2*3)+(N3*4)+(N4))/(2+3+4+1);
    if(A>=7.0){
            printf("Media: %.1f\nAluno aprovado.\n",A);
    }
    else if(A>=5.0 && A<=6.9){
            printf("Media: %.1f\nAluno em exame.\n",A);
            scanf("%f",&X);
            printf("Nota do exame: %.1f\n",X);
            Y=(A+X)/2;
            if(Y>=5.0){
                    printf("Aluno aprovado.\n");
                    printf("Media final: %.1f\n",Y);
            }
            else{
                    printf("Aluno reprovado.\n");
                    printf("Media final: %.1f\n",Y);
            }

    }
    else{
            printf("Media: %.1f\n",A);
            printf("Aluno reprovado.\n");
    }
    return 0;


}
