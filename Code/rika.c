#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *stoupper(const char s[]) 
{
    int id=0;
    char *news = (char *)malloc(100);
    
    
    while(s[id]!='\0' && id<100)
    {
        if(s[id]>=97 && s[id] <=122)
        {
            news[id]= s[id]-32;
        }
        else
        {
            news[id]= s[id];

        }
        id++;
    }
    news[id]='\0';
    return news;
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
    if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}