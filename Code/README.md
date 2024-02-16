# scanset

scanset set terminate char %10[^,]

`fscanf(fp,"%*[^,],%*[^,],%29[^,],%d,%lf", name, &amount, &cost`

`* to ignore that scaned char so no need to apply  to value`

`[] is set  like [A-Z]`

`[^,] = get all string except , if found it stop at it`

`can change like [^.] = stop at .`

`best combo %29[^,] get all char and stop at , or get char = 29 chars`

`no need to type type behind it`

# strstr

strstr = return first occurance of 2nd string to end of first string;

# strchr

strchr = like strstr but compare with strstr

# strcmp
strcmp = return int if result==0 two string is same., >=1 first string ascinum more than second string , <=-1 first string asciinum less than second string;  
