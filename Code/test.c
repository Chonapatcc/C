#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  char string[] = "Cat is good dog is bad";
  char *ptr = strtok(string," ");

  while(ptr!= NULL)
  {
    printf("%s\n" ,ptr);
    ptr = strtok(NULL," ");
  }
  
  
}