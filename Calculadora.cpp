#include <stdio.h>

int main() {
    int num1, num2, resultado;
    char op;
    int valido = 1;

    printf("Ingrese operacion: ");
    scanf("%c", &op);
    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    switch (op) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
        case 'x':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
            
        default:
            valido = 0;
    }

    if (valido)
        printf("El resultado es %i\n", resultado);
    else
        printf("Operacion invalida\n");

    return 0;
}
