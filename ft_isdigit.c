/*
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
*/

int   ft_isdigit(int c)   
{
    return(c >= 48 && c<=57);
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
    printf("isdigit :%d\n", isdigit(c));
    printf("ft_isdigit :%d\n", ft_isdigit(c));
    return(0);
}
*/

