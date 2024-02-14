#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  char cat[] = "   ^cart123bro";

  char dog[10];

  sscanf(cat,"%[^\n]s",dog);

  printf("%s" , dog);
}