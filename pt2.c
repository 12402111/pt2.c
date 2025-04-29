#include<stdio.h>
int main()
{
    int n;int max =-1; int sm =-1;
    scanf("%d", &n);
    int r1=n%10;
    n=n/10 ;
    if(r1>max)
    {
        max =r1;

    }
    int r2 = n%10;
    n=n/10;
    if(r2 > max)
    {
        sm = max;
        max = r2;
    }
    else if (r2 > sm)
    {
        sm = r2;
    }

    int r3 = n%10;
    n=n/10;

    if(r3 > max)
    {
        sm = max;
        max = r3;
    }
    else if (r3 > sm)
    {
        sm = r3;
    }
    int r4 = n%10;
    n=n/10;

if(r4 > max)
    {
        sm = max;
        max = r4;
    }
    else if (r4 > sm)
    {
        sm = r4;
    }
if(sm!=max)
   {
   printf("m:%d s:%d", max, sm);
   }

  else{
   printf("-1");
}
main();
    return 0;
}
