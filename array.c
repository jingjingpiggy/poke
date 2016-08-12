#include <stdio.h>

void f()
{
int aa[5]={1,2,3};
int i = 1;
for (i=0;i<10;i++)
  printf("%d\n", i);
  aa[i]=i;
printf("f()\n");
}

void main()
{
f();
printf("ok\n");
}
