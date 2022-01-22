//add two nmbers
#include<stdio.h>
void add()
{
  int num1,num2;
  float sum;
  printf("enter two numbers\n");
  scanf("%d%d",&num1,&num2);
  sum = num1 + num2;
  printf("addition of %d + %d is =%f \n",num1,num2,sum);
}
int main()
{
  add(); // fucntion call
  return 0;
}