#include <stdio.h>
#include <math.h>
#include <string.h>

struct __Node
{
  int data;
  struct __Node *next;
}
typedef struct __Node Node;
typedef Node *List;
int main()
{
  char* arr[9] = { "Hello", [1 ... 7] = "JournalDev", "Hi" };
    for (int i=0; i<9; i++)
      printf("%s\n", arr[i]);
    return 0;

}