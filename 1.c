/*Programa en donde creamos una estructura de datos y le pedimos al usuario que 
ingrese los datos para llenar la estructura.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Persona{
    char nombre[30];
    char Ap[30];
    char Am[30];
    int edad;
    char sexo[10];
    char nacionalidad[50];
    char direccion[100];
    char CURP[30];
}Persona;

int main(){
    Persona humano;
    int edad = 0;
    char sex;

    printf("%s\n", "Definir persona" );
    printf("%s\n", "Nombre: " );
    fflush(stdin);
    setbuf(stdin,0);
    gets(humano.nombre);

    printf("%s\n", "Apellido Paterno: " );
    fflush(stdin);
    setbuf(stdin,0);
    gets(humano.Ap);

    printf("%s\n", "Apellido Materno: " );
    fflush(stdin);
    setbuf(stdin,0);
    gets(humano.Am);

    printf("%s\n", "Edad: " );
    fflush(stdin);
    scanf("%d", &edad);
    humano.edad = edad;

    printf("%s\n", "Sexo: " );
    fflush(stdin);
    setbuf(stdin,0);
    //scanf("%c", &sex);
    gets(humano.sexo);

    printf("%s\n", "Nacionalidad: " );
    fflush(stdin);
    setbuf(stdin,0);
    gets(humano.nacionalidad);

    printf("%s\n", "Direccion: " );
    fflush(stdin);
    setbuf(stdin,0);
    gets(humano.direccion);

    printf("%s\n", "CURP: " );
    fflush(stdin);
    setbuf(stdin,0);
    gets(humano.CURP);

    printf("%s\n", "Los datos ingresados fueron" );
    printf("%s\n", humano.nombre );
    printf("%s\n", humano.Ap );
    printf("%s\n", humano.Am );
    printf("%d\n", humano.edad );
    printf("%c\n", humano.sexo );
    printf("%s\n", humano.nacionalidad );
    printf("%s\n", humano.direccion );
    printf("%s\n", humano.CURP );

}
