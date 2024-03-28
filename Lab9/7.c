#include <stdio.h>

double findAverage(char *filename)
{
    FILE *ptr = fopen(filename,"r");
    double sum=0;
    double count=0;
    double score;
    while(fscanf(ptr,"%lf",&score)==1)
    {
        sum+=score;
        count++;
    }
    return  sum/count;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}