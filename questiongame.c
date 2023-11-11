#include <stdio.h>
#include <string.h>

int main()
{
    char name[][10]={"Makoto","Yukari","Junpei"};
    char question[]="Who is the main character?";

    printf("%s\n",question);
    for (int i=0;i<sizeof(name)/sizeof(name[0]);i++)
    {
        printf("%d. %s\n",i+1,name[i]);
    }
    printf("Your answer : ");
    int answer;
    char dummy;
    scanf("%d",&answer);
    scanf("%c",&dummy);
    if (answer==1)
    {
        printf("Correct! %s is the main character.",name[0]);
    }
    else
    {
        printf("Wrong! %s is the main character.",name[0]);
    }
}