#include<stdio.h>
int main()


{
    int n;




    int max =0;
    int sm =0;
    scanf("%d", &n);


    int r1=n%10;
    n=n/10 ;


    if(r1>max)
    {
        max =r1;
sm = r1;
    }
    int r2 = n%10;
    n=n/10;


    if(r2 > max)
    {
        sm = max;
        max = r2;
    } else if (r2 == max)
    {
        // ignore
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
    } else if (r3 == max)
    {
        // ignore
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
     else if (r4 == max)
    {
        // ignore
    }
    else if (r4 > sm)
    {
        sm = r4;
    }
if(max!=sm)
   {

   printf("m:%d s:%d", max, sm);}

  else{

       int x =-1;
   printf("%d",x);
}

    return 0;



}
