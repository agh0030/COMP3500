#include <stdio.h> 
#include <math.h>
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i;
  int avg = 0;
  int average;
  
  for (i = 0; i < 10; i++)
    {
      avg += sqrt( arr[ i ] );
    }
  avg = avg/10;
  printf("%d\n",  avg );
  return 0;
  }
