#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    double m;
    double b;

}Record;

int main()
{
    // FILE *fp;
    // char str[60];

    double m,b,x=1;
    Record temp;
    
    
    ifstream infile("taxi_data2.dat", ios::binary);

    while(infile.peek() != EOF)
    {
        infile.read((char *)&temp, sizeof(Record)); 
        cout << temp.m << " " << temp.b <<endl;
        double y = temp.m * x + temp.b;
        x=y;
    }
    
    
    infile.close();

    printf("%.4lf",x);



}