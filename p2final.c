#include<stdio.h>
int input()
{
  int num;
  printf("enter a number\n");
  scanf("%d",&num);
  return num;
}
int add(int a, int b)
{
  float sum;
  sum= a+b;
  return sum; 
}
void output(int a,int b,int sum)
{
  printf("addition of %d + %d is = %d\n",a,b,sum);
}
int main()
{
  int num1,num2,sum;
  num1 = input();
  num2 = input();
  sum = add(num1,num2);
  output(num1,num2,sum);
  return 0;
}