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

    
    
    
    FILE *fp = fopen("taxi_data4.dat","rb");
    Record *list[2000] ;
    int c=0;
    int max=0;
    while(!feof(fp))
    {
        
        list[c]=(Record *)malloc(sizeof(Record));

        fread(list[c],sizeof(Record),1,fp);
        //cout <<list[c]<<" "<<list[c]->id<< " " <<list[c] ->m <<  "  "<<list[c]->b<<endl;

        //fflush(stdout);
        if(list[c]->id >max)
        {
            max=list[c]->id;
        }
        c++;
        
    }
    
    //cout << max ; 
    double m,b,x=1;
    Record temp;
    
    for(int i =1 ;i<=max ;i++)
    {
        int ch=1;
        while(ch)
        {
            ch = 0 ;
            for(int i2= 0 ;i2 < c;i2++)
            {
                if(list[i2]->id ==i)
                {
                    //cout <<list[i2]<<" "<<list[i2]->id<< " " <<list[i2] ->m <<  "  "<<list[i2]->b<<endl;
                    
                    double y = list[i2]->m * x + list[i2]->b;
                    x=y;
                    list[i2]->id =-1;
                    ch=1;
                }
            }
            
        }
        
    }
        

        
    // }

    printf("%.4lf",x);

    // fflush(stdout);



}