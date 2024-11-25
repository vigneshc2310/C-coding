#include <stdio.h>

int main()
{
    int a,b,c,d,e,sum,avg;
    
    printf("enter the mark a :\n",a);
    printf("enter the mark b :\n",b);
    printf("enter the mark c :\n",c);
    printf("enter the mark d :\n",d);
    printf("enter the mark e :\n",e);
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=sum/5;
    printf("Total average value :%d\n",avg);
    
        return 0;
}
