#include<stdio.h>
int input()
{
int num;
printf("enter a numbers");
scanf("%d", &num);
return 0;
}
int cmp(int a,int b,int c)
{
if(a>b)
{
    if(a>c)
    return a;
    else
        return c;
}
else
{
    if(b>c)
        return b;
    else
        return c;
return 0;
}
void output(int a,int b,int c,int largest)
{
printf("this is the largest number is", largest,a,b,c );

}
int main()
{
  int num1, num2, num3;
  num1 = input();
  num2 = input();
  num3 = input();
  cmp(num1, num2, num3);
  output(num1,num2,num3);
  return 0;
}
}