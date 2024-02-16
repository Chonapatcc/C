#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    double m;
    double b;
    int id;

}Record;

int main()
{
    // FILE *fp;
    // char str[60];

    double m,b,x=1;
    Record temp;
    
    
    FILE *fp = fopen("taxi_data3.dat","rb");
    Record *list[1000] ;
    int c=0;
    
    while(!feof(fp))
    {
        
        list[c]=(Record *)malloc(sizeof(Record));

        fread(list[c],sizeof(Record),1,fp);
        cout << list[c]-> id<<" " << c<< endl;
        //fflush(stdout);
        c++;
        
    }
    


    for(int i=0 ; i<c; i++)
    {
        
        for(int y=i+1; y<c; y++)
        {
            if(list[i]->id > list[y]->id)
            {
                Record *temp = list[i];
                list[i] = list[y];
                list[y]=temp;
            }

        }
    }

    for(int i =0 ; i< c; i++)
    {
        if(list[i]->id==0)
        {
            continue;
        }
        //cout << list[i] ->m <<  "  "<<list[i]->b<<endl;
        double y = list[i]->m * x + list[i]->b;
        x=y;
    }

    printf("%.4lf",x);



}