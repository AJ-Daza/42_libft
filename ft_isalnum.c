/*
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
*/

int   ft_isalnum(int c)   
{
    return((c >= 65 && c<=90) || (c >= 97 && c<=122) || (c >= 48 && c<=57));
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
    printf("isalnum :%d\n", isalnum(c));
    printf("ft_isalnum :%d\n", ft_isalnum(c));
    return(0);
}
*/
