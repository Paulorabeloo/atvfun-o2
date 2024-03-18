#include <stdio.h>

float dobro_do_maior(float x, float y)
{
    float dobro;
    if (x>y)
    {
        dobro = 2 * x;
    }
    else
    {
        dobro = 2 * y;
    }
return dobro;
}

int main()
{
    float x, y, resultado;
    printf("Digite o valor de x e o valor de y:\n");
    scanf("%f%f", &x, &y);
    resultado = dobro_do_maior(x, y);
    printf("O resultado e: %.f\n", resultado);
}
