#include<stdio.h>

int input_array_size()
{
  int n;
  printf("enter the size of array\n");
  scanf("%d",&n);
  return n;

}
void input_array(int n,int a[n])
{
  int i;
  printf("the numbers to add\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}

int is_composite(int n)
{
  int i;
  for(i=2;i<=n/2;i++)
   {
     if(n%i==0)
     return 1;
   }
   return 0;

}

int sum_composite_numbers(int n,int a[n])
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    if(is_composite(a[i]))
    {
      sum +=a[i];
  }
  }
  return sum;

}

void out_put(int sum)
{
  
printf("%d\n",sum);

}

int main()
{
  int x=input_array_size();
  int a[x];
  input_array(x,a);
  int sum=sum_composite_numbers(x,a);
  out_put(sum);
  return 0;
}