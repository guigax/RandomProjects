#include <stdio.h>

int main()
{
    float soma = 0;
    for (float x = 3;x <= 41; x++) {
    	soma = soma + ((x-1) / x);
    }
    printf("%.14f", soma);

    return 0;
}