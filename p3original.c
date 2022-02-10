#include<stdio.h>
int input_number()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  int sum=0;
  for (int i=2;i<n;i++)
  {
    if((n%i)==0)
    sum++;
  }
  return sum;
}
void output(int n, int composite)
{
  if (composite!=0)
    printf("%d is a composite number\n",n);
  else 
    printf("%d is not a composite number\n",n);
}
int main()
{
  int n,cmp;
  n=input_number();
  cmp=is_composite(n);
  output(n,cmp);
  return 0;
}