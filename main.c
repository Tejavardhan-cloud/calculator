#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int div(int a,int b)
{
    if(a==0)
    return -1;
    else return a/b;
}
void main()
{
    printf("welcome\n");
    int a,b;
    printf("enter the a and b values\n");
    scanf("%d%d,&a,&b");
    int c=add(a,b);
    printf("%d",c);
    printf("%d\n",div(a,b));
}