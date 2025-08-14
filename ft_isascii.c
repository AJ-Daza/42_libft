/*
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
*/


int   ft_isalpha(int c)   
{
    return(c >= 0 && c<=127);
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
    printf("isalpha :%d\n", isalpha(c));
    printf("ft_isalpha :%d\n", ft_isalpha(c));
    return(0);
}
*/
