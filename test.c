#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  FILE *file= fopen("scores.txt","r");
  double anum;
  int x;
  int c=0;
  while (x=fscanf(file,"%lf",&anum))
  {
      if(c>10)
      {
        break;
      }
      printf("%lf %d\n",anum,x);
      c++;
  }


}