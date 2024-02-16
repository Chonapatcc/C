#include <stdio.h>
#include <string.h>


typedef struct 
{
    char id[12];
    int score;
} studentRecord;

void init(studentRecord list[], int size) 
{
    char x[3][12]={"55100001","55100002","55100003"};
    for(int i = 0; i<size; i++)
    {
        strcpy(list[i].id,x[i]);
        list[i].score=0;
    }

}

void enterScore(studentRecord list[], int size)
{
    for(int zz =0 ; zz<size; zz++)
    {
        char id[13];
        int sc;
        scanf("%s %d",id,&sc);
        
        for(int i =0 ; i<size ;i++)
        {
            char ch[10];
            strcpy(ch,list[i].id);
            int n1=strlen(ch);
            int n2=strlen(id);
            if(n2==1)
            {
                break;
            }
            
            int check=0;
            for(int y =0 ;y<n1;y++)
            {
                //printf("%c %c\n",ch[y],id[x]);
                int check2=1;
                for(int y2=0;y2<n2;y2++)
                {
                    if(ch[y+y2]!=id[y2])
                    {
                        check2=0;
                        break;
                    }
                }
                if(check2)
                {
                    check=1;
                    break;
                }
            }
            if(check)
            {
                list[i].score=sc;
                break;
            }
        }
    }
}

void printRecords(studentRecord list[], int size) {
	int i;

	printf("   ID        Score\n");
	for (i = 0; i < size; i++) {
		printf("%s       %d\n", list[i].id, list[i].score);
	}
}




int main() 
{
	int enter;
	studentRecord list[3];

	init(list, 3);
    enterScore(list, 3);
	printRecords(list, 3);
	return 0;
}