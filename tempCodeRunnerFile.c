char x[9]="55100001";
    int i,y;
    for(i = 0; i<size; i++)
    {
        strcpy(list[i].id,x);
        list[i].id[7]=list[i].id[7]+i;
        list[i].score=0;
    }