/*
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
*/

int   ft_isprint(int c)   
{
    return(c >= 32 && c<=126);
}

/*
int     main(int    argc, char  **argv)
{
    int c = 0;

    if(argc !=2)
    {
        printf("argc Error\n");
        return(0);
    }

    c = atoi(argv[1]);
    printf("isprint :%d\n", isprint(c));
    printf("ft_isprint :%d\n", ft_isprint(c));
    return(0);
}
*/
