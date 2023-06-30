#include <stdio.h>
int main (void)
{
  int num1, ans;

printf("Enter a number :");
scanf("%d",&num1);

ans = num1 % 2;

if(ans == 0) printf("even number");
else{  printf("odd number");}

return 0;

}

