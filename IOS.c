#include<stdio.h>
#include<string.h>

struct Word 
{
    char word[21];        
    
    int count;
};

int main(){
    char input[21];
    int i, last_word = 0, find = 0;
    struct Word data[20] = {0};
    scanf("%20s", input);

    while(strcmp(input,"exit"))
    {   
        int ch=1;
        for(int y=0 ;y<last_word;y++)
        {
            if(strcmp(data[y].word,input)==0)
            {
                data[y].count++;
                ch=0;
            }
        }
        if(ch)
        {
            
            strcpy(data[last_word].word,input);
            data[last_word].count =1;

            last_word++;
        }
        

        scanf("%20s", input);

    }

    printf("Output:\n");
    for(i=0;i<last_word;i++)
    {
        printf("%s = %d\n", data[i].word, data[i].count);
    }
}