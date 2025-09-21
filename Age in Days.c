#include <stdio.h>
 
int main() {
 
    int Days,year,month,day;
    scanf("%d",&Days);
    year=Days/365;
    month=(Days%365)/30;
    day=(Days%365)%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
 
    return 0;
}
