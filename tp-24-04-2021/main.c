#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int edad;
    char nombre[20];
    printf("%s", "Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("%s", "Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Hola %s! Tu edad es de %d a%cos\n", nombre, edad, 164);

    system("pause");
    return 0;
}
