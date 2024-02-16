#include <bits/stdc++.h>
using namespace std;


int main()
{
    FILE *fp;
    char str[60];
    fp = fopen("taxi_data.txt","r");
    double m,b,x=1;
    while(fscanf(fp, "%lf %lf",&m,&b)!=EOF)
    {
        cout << m <<" "<< b << endl;
        double y = m * x + b;
        x=y;
    }

    fclose(fp);
    printf("%.4lf",x);

}