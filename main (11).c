#include <stdio.h>

int main()
{   int num4034,valor4034;
    int *p;
    
    num4034=99;
    p=&num4034;
    
    valor4034= 36;
    
    
     printf("\n\n%d\n", valor4034);
    printf("o endereço para onde o ponteiro aponta: %p\n", p);
    printf("valor da variavel apontda: %d\n", *p);

    return 0;
}