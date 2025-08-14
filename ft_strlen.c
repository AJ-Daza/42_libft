//#include<stdio.h>
#include <stddef.h>

size_t ft_strlen(const char *str)
{
    if (!str)
	return 0;

    size_t i = 0;
    while (str[i])
        i++;
    return(i);
}

/*
int main(int argc, char **argv)
{
    if(argc != 2)
    {
        printf("argc Error\n");
        return(0);
    }

    printf("%ld\n", ft_strlen(argv[1]));
    return(0);
}
*/

