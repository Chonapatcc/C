if(x==0 && y==0)
    {
        printf("Center");
    }
    else if(x==0)
    {
        if(y>0)
        {
            printf("North");
        }
        else
        {
            printf("South");
        }
    }
    else if(x>0)
    {
        if(y>0)
        {
            printf("North-east");
        }
        else if(y==0)
        {
            printf("East");
        }
        else
        {
            printf("South-east");
        } 
    }
    else
    {   
        if(y>0)
        {
            printf("North-west");
        }
        else if(y==0)
        {
            printf("West");
        }
        else
        {
            printf("South-west");
        } 
    }
    