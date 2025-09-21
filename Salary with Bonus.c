#include <stdio.h>
 
int main() {
 
    char name;
    double fsalary,sales,total;
    scanf("%s",&name);
    scanf("%lf%lf",&fsalary,&sales);
    total=fsalary+(sales*0.15);
    printf("TOTAL = R$ %.2lf\n",total);
 
    return 0;
}
