#include<stddef.h>
//#include<stdio.h>
//#include<stdlib.h>

void *ft_memset(void *str, int c, size_t n)
{
    size_t i = 0;
    unsigned char *bytePointer = str;

    while( i < n)
    {
        bytePointer[i] = c;
        i++;
    }
    return(str);
}

/*
int main(int    argc, char  **argv)
{
    if(argc != 4)
    {
        printf("argc Error\n");
        return(0);
    }
    char    *tstr = argv[1];
    int tc = atoi(argv[2]);
    size_t tn = atoi(argv[3]);
    ft_memset(tstr, tc, tn );
    printf("%s\n", tstr);
    return(0);
}
*/
