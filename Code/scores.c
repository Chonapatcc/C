#include <stdio.h>
#
double findAverage(char *filename)
{
    FILE *file= fopen(filename,"r");
    double sum=0;
    double anum;
    int c=0;
    while(fscanf(file,"%lf",&anum)==1)
    {
        sum +=anum;
        c++;
    }
    return sum/c ;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}