#include<stdio.h>
int main()
{
    int qt , dc;
    float rate , ttl;
    printf("enter the qt and rate");
    scanf("%d %f", &qt, &rate);
    if(qt>20)
    dc = 10;
    ttl = (qt * rate) - (qt * rate * dc/100);
    printf("total expense= rs:%f\n",ttl);
    return 0;
}
