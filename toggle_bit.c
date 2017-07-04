#include <stdio.h>
#define toggle_bit(n,p) (n^1<<(p-1))
void show(int);
int main()
{
   int num,pos;
   printf("Enter a number to be toggled\n");
   scanf("%d%d",&num,&pos);
   show(num);
   num=toggle_bit(num,pos);
   show(num);

   return 0;

}

void show(int n)
{
   int i;
   for(i=1<<15;i>0;i=i/2)
      (n & i) ? printf("1") : printf("0");
   printf("\n");
}

