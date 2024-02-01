#include <stdio.h>

struct complex 
{   
    float a,b;

};

struct complex add_complex(struct complex C,struct complex D)
{
    struct complex temp;
    
    float a,b;
    a=C.a+D.a;
    b=C.b+D.b;
    //printf("%f %f/n",a,b);
    temp.a=a;
    temp.b=b;



    return temp;
}

struct complex multiply_complex(struct complex C,struct complex D)
{

    struct complex temp;    
    float a,b;
    a=C.a*D.a - C.b*D.b;
    b=C.a*D.b+C.b*D.a;
    temp.a=a;
    temp.b=b;
    return temp;
}

void print_complex(char a[],struct complex x)
{
    printf("%s",a);
    int ch=0;
    if(x.a==0 && x.b==0)
    {
        printf("0.0");
    }
    else if(x.a==0)
    {
        printf("%.1fi",x.b);
    }
    else if(x.b==0)
    {
        printf("%.1f",x.a);
    }
    else
    {
        printf("%.1f",x.a);
        if(x.b>0)
        {
            printf(" + %.1fi",x.b);
        }
        else
        {
            printf(" - %.1fi",-x.b);
        }
    }
    
    printf("\n");

}

int main()
{
    struct complex C,D,E,F;
    


    printf("Enter C: ");
    scanf("%f %f", &(C.a), &(C.b));
    printf("Enter D: ");
    scanf("%f %f", &(D.a), &(D.b));


    //printf("%f\n",C.a);
    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}