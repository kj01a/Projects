#include <stdio.h>
#include <stdlib.h>

#define FIB_MAX 47

int main(int argc, char *argv[])
{
    //Check there is at least one command line argument. 
    if (argc != 2)
    {
        printf("USAGE: ./fib DIGITS\n");
        
        return 1;
    }
    
    //Verify user chosen n is within pre defined limit
    int n = atoi(argv[1]);
    
    if (n < 1 || n > FIB_MAX)
    {
        printf("Please choose a number between 1 and 47.\n");
        
        return 1;
    }
    
    int i;
    int x = 0;
    int y = 1;
    int z = 0;
    
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", x);
        z = x + y;
        x = y;
        y = z;
    }
    
    return 0;
}
