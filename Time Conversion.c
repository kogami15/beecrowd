#include <stdio.h>
 
int main() {
 
    int N,Hour,Minute,Second;
    scanf("%d",&N);
    Hour=N/3600;
    Minute=(N%3600)/60;
    Second=(N%3600)%60;
    printf("%d:%d:%d\n",Hour,Minute,Second);
 
 
    return 0;
}
