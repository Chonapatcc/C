// พารามิเตอร์ของฟังก์ชันชั main() เต็มรูปแบบ
#include <stdio.h>
int main(int argc, char *argv[], char *envp[])
{   int i;
    for (i=0; i < argc; i++)
        printf("Argument %d: %s\n", i, argv[i]);
    
    // Printing all environment variables
    for (i=0; envp[i] != NULL; i++)
        printf("Environment Variable %d: %s\n", i, envp[i]);
    return 0;
}