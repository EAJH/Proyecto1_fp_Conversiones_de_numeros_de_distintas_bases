#include"funciones.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//--------------------FUNCIÓN PRINCIPAL--------------------
int main(){
    fflush(stdin);//Se encarga de limpiar lo que se encuentre en la entrada estándar 
    printf("---------------PROYECTO 1. CONVERSIONES DE NUMEROS DE DISTINTAS BASES---------------\n");
    printf("\t\t\tUniversidad Nacional Autonoma de Mexico (UNAM)\n");
    printf("\t\t\tFacultad de Ingenieria\n");
    printf("\t\t\tMateria: Fundamentos de programacion (1122)\n");
    printf("\t\t\tProfesor: Mercado Martinez Adrian Ulises\n");
    printf("\t\t\tGrupo: 07\n");
    printf("\t\tBrigada 11\n");
    printf("Integrantes de la brigada:\n");
    printf("\t-Jasso Vazquez Sara.\n");
    printf("\t*Numero de lista: 28.\n");
    printf("\t-Juarez Herrera Erick Adrian.\n");
    printf("\t*Numero de lista: 30.\n");
    printf("\t-Perez Ortiz Sofia.\n");
    printf("\t*Numero de lista: 38.\n");
    printf("\t\t\tSemestre 2022-1\n");

    //----------DECLARACIÓN DE VARIABLES----------
    int eleccion=0, x=0, num=0;
    char binarioo[]="";
    char hexadecimall[]="";
    char octall[]="";

    char *binario=NULL;
    char *binario2=NULL;
    char *hexadecimal=NULL;
    char *hexadecimal2=NULL;
    char *octal=NULL;
    char *octal2=NULL;
    
    printf("Programa que realiza conversiones en distintos sistemas numericos. \n");
    printf("Ingrese el numero de la conversion que desea realizar: \n");
    printf("1. Binario a decimal.\n");
    printf("2. Decimal a binario.\n");
    printf("3. Hexadecimal a decimal.\n");
    printf("4. Decimal a hexadecimal.\n");
    printf("5. Octal a decimal.\n");
    printf("6. Decimal a octal.\n");
    printf("7. Binario a hexadecimal.\n");
    printf("8. Hexadecimal a binario.\n");
    printf("9. Binario a octal.\n");
    printf("10. Octal a binario.\n");
    scanf("%d", &eleccion);
    
    do{
        switch(eleccion){

        case 1:
            printf("Ingresa un numero entero en base 2: \n");
            scanf("%s",&binarioo);
            num = conv_binario_decimal(binarioo);
            printf("Su equivalente en base 10 es: %d\n", num);
            num=0;
            return 0;
        break;

        case 2:
            printf("Ingresa un numero entero base 10: \n");
            scanf("%d",&num);
            binario = conv_decimal_binario(num);
            printf("Su equivalente en base 2 es: %s\n",binario);
            free (binario);
            binario = NULL;
            return 0;
        break;

        case 3:
            printf("Ingresa un numero entero base 16: \n");
            scanf("%s",&hexadecimall);
            num = hexa_decimal(hexadecimall);
            printf("Su equivalente en base 10 es: %d\n", num);
            num=0;
            return 0;
        break;
        case 4:
            printf("Ingresa un numero entero base 10: \n");
            scanf("%d",&num);
            hexadecimal = decimal_hexa(num);
            printf("Su equivalente en base 16 es: %s\n",hexadecimal);
            free (hexadecimal);
            hexadecimal = NULL;
            return 0; 
        break;
        case 5:
            printf("Ingresa un numero entero base 8: \n");
            scanf("%s",&octall);
            num = octal_decimal(octall);
            printf("Su equivalente en base 10 es: %d\n", num);
            num=0;
            return 0;
        break;
        case 6:
            printf("Ingresa un numero entero base 10: \n");
            scanf("%d",&num);
            octal = decimal_octal(num);
            printf("Su equivalente en base 8 es: %s\n",octal);
            free (octal);
            octal = NULL;
            return 0; 
        break;
        case 7:
            fflush(stdin);
            printf("Ingresa un numero entero base 2: \n");
            scanf("%s",& binarioo);
            binario= binarioo;
            hexadecimal = binario_hexa(binario);
            printf("Su equivalente en base 16 es: %s\n",hexadecimal);
            free (hexadecimal);
            hexadecimal = NULL;
            return 0; 
        break;
        case 8:
            fflush(stdin);
            printf("Ingresa un numero en base 16:\n");
            scanf("%s",&hexadecimall);
            hexadecimal = hexadecimall;
            hexadecimal = hexa_binario(hexadecimal);
            hexadecimal2 = hexa_binario2(hexadecimal);
            printf("Su equivalente en base 2 es: %s\n", hexadecimal2);
            free(hexadecimal);
            free(hexadecimal2);
            hexadecimal = NULL;
            hexadecimal2=NULL;
            return 0;
        break;

        case 9:
            fflush(stdin);
            printf("Ingresa un numero en base 2: \n");
            scanf("%s",binarioo);
            binario = binarioo;
            binario = binario_octal(binario);
            binario2 = binario_octal2(binario);
            printf("Su equivalente en base 8 es: %s\n", binario2);
            free(binario);
            free(binario2);
            binario = NULL;
            binario2=NULL;
            return 0;
        break;

        case 10:
            fflush(stdin);
            printf("Ingresa un numero en base 8: \n");
            scanf("%s", octall);
            octal = octall;
            octal = octal_binario(octal);
            octal2 = octal_binario2(octal);
            printf("Su equivalente en base 2 es: %s\n", octal2);
            free(octal);
            free(octal2);
            octal = NULL;
            octal2=NULL;
            return 0;
        break;
        default:
            printf("Opcion no valida.\n");
        break;
    }
    }while(eleccion>=1 && eleccion<=10);
    return 0;
}