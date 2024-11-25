#include <stdio.h>

int main()
{
 int n,mid;
 scanf("%d",&n);
 mid=(n+1)/2;
 for(int i=1;i<=n;i++,printf("\n")){
     for(int j=1;j<=n;j++){
         if(j==mid||i==mid||(j==1&&i<=mid)||(j==n&&i>=mid)||
         (i==n&&j<=mid)||(i==1&&j>=mid))
         printf("*");
         else
         printf(" ");
     }
    }
    
  printf("\n \n");
  for(int i=0;i<=n;i++,printf("\n")){
      for(int j=1;j<=n;j++){
          if(j==1||j==n||(i==j&&j<=mid)||(i+j==n+1&&i<=mid))
          printf("*");
          else
          
          printf(" ");
          
      }
  }
}
