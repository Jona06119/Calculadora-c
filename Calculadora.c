#include <stdio.h>

int Calculadora()
{
    float num1, num2, resultado;
    int opcion;

    printf("=== Calculadora ===\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Ingrese el primer numero: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%f", &num2);

        resultado = num1 + num2;
        printf("El resultado es: %.2f\n", resultado);
        break;

    case 2:
        printf("Ingrese el primer numero: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%f", &num2);

        resultado = num1 - num2;
        printf("El resultado es: %.2f\n", resultado);
        break;

    case 3:
        printf("Ingrese el primer numero: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%f", &num2);

        resultado = num1 * num2;
        printf("El resultado es: %.2f\n", resultado);
        break;

    case 4:
        printf("Ingrese el primer numero: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%f", &num2);

        if (num2 != 0)
        {
            resultado = num1 / num2;
            printf("El resultado es: %.2f\n", resultado);
        }
        else
        {
            printf("Error: Division por cero no permitida.\n");
        }
        break;

    default:
        printf("Opcion invalida.\n");
    }

    return 0;
}

int main()
{
    Calculadora();

    return 0;
}