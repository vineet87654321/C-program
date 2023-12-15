#include<stdio.h>
int main()
{
int *p,*q,r,a,b;
printf("enter no");
scanf("%d%d",&a,&b);
p=&a;
q=&b;
r=*p+*q;
printf("sum of %d\n",r);
return 0;

}

    
    
