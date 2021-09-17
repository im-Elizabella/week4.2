#include<stdio.h>
int check_number (int number)
{
      int count = 0;
      int i;

  for( i=2; i<=number/2; i++)
  {
     if(number%i == 0)
     {
       count=1;
       break;
     }
  }

  if(number == 1) 
  {
      count = 1;
  }
  if(number == 0)
  {
      count = 1;
  }

  return count;

}

int main ()
{
    int number;
    printf("Enter numer : ");
    scanf("%d",&number);
    if(check_number(number) == 0)
    {
        printf("%d is prime number", number);
    }
    else
    {
     printf("%d is not prime number", number); 
    }
  
  return 0;
}
