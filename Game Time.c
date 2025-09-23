#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);

    if(a>b){
            x=(24-a)+b;
            printf("O JOGO DUROU %d HORA(S)\n",x);
    }
    else if(a<b){
            x=b-a;
            printf("O JOGO DUROU %d HORA(S)\n",x);
    }
    else{
            printf("O JOGO DUROU 24 HORA(S)\n");
    }

return 0;
}
