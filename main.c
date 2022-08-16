#include<stdio.h>
int sum();
int a,b,add;
int main()
{
 printf("enter two number\n");
 scanf("%d%d",&a,&b);
 add=a+b;
 printf("sum is %d\n",add);
 sum();
}
int sum()
{
 return 0;
}
