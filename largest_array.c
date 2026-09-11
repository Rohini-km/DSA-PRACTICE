#include <stdio.h>
int main()
{
int a[5] = {10,30,20,60,40};
int largest = a[0];
int i;
for (i=1;i<5;i++)
{
     if (a[i] >largest )
     {
       largest =a[i];
     }
}
printf ("largest number is = %d", largest);
return 0;
}
