#include "funciones.h"
#include <string.h>
#include<stdbool.h>
#include <math.h>
#include <stdlib.h> 

//--------------------FUNCIONES QUE REALIZAN LAS CONVERSIONES CON PARTE DECIMAL--------------------
/**
 * @brief Función que realiza la conversión de un número binario a un número decimal
 * @param binario que es una cadena
 * @return num que corresponde a un entero
 * @ÚltimaModificación: 12 de noviembre de 2021
 */
    
int conv_binario_decimal(char *binario){
    int num = 0, pot = 0;
    for(int i = strlen(binario)-1; i>=0; i--){
        if(binario[i]=='1') 
            num= num + pow(2, pot); //pow(base,exponente);
        pot = pot + 1;
    }
    return num;
}


/**
 * @brief Función que realiza la conversión de un número decimal a un número binario
 * @param num que corresponde a un entero
 * @return binario que es una cadena
 * @ÚltimaModificación: 12 de noviembre de 2021
 */
char* conv_decimal_binario(int num){
    int t=0, i=0, j=0;
    
    char *temp=NULL, *binario=NULL;
    temp = (char*)malloc(sizeof(char));
    strcpy(temp, "");

    do{
        t= num % 2;        
        num = (int)(num /2);
        if(t==1) strcat(temp, "1");
        else strcat(temp, "0");        
    }while(num!=1 && num!=0);
    
    if(num== 1) strcat(temp, "1");

    binario = (char*)malloc(strlen(temp)*sizeof(char));
    //Va al revés para respetar el procedimiento de transformación
    for(i=strlen(temp)-1, j=0; i >=0; i--, j++){
        binario[j] = temp[i];
    }
    free(temp);
    temp = NULL;
    return binario;
}


/**
 * @brief Función que realiza la conversión de un número hexadecimal a un número decimal
 * @param hexadecimal que es una cadena
 * @return num que corresponde a un entero
 * @ÚltimaModificación: 12 de noviembre de 2021
 */
int hexa_decimal(char *hexadecimal){
int num = 0, pot = 0;
    for(int i = strlen(hexadecimal)-1; i>=0; i--){
        switch(hexadecimal[i]){
            //Los números previos a la función pow son para seguir el procedimiento.
            case '0':
                num = 0;
                break;
            case '1':
                num += pow(16, pot);
                break;
            case '2':
                num += 2*pow(16, pot);
                break;
            case '3':
                num += 3*pow(16, pot);
                break;
            case '4':
                num += 4*pow(16, pot);
                break;
            case '5':
                num += 5*pow(16, pot);
                break;
            case '6':
                num += 6*pow(16, pot);
                break;
            case '7':
                num += 7*pow(16, pot);
                break;
            case '8':
                num += 8*pow(16, pot);
                break;
            case '9':
                num += 9*pow(16, pot);
                break;
            case 'A': 
            case 'a':
                num += 10*pow(16, pot);
                break;
            case 'B': 
            case 'b':
                num += 11*pow(16, pot);
                break;
            case 'C': 
            case 'c':
                num += 12*pow(16, pot);
                break;
            case 'D': 
            case 'd':
                num += 13*pow(16, pot);
                break;
            case 'E': 
            case 'e':
                num += 14*pow(16, pot);
                break;
            case 'F': 
            case 'f':
                num += 15*pow(16, pot);
                break;
        }        
        pot = pot + 1; //Para que vaya aumentando la potencia
    }
    return num;
}


/**
 * @brief Función que realiza la conversión de un número decimal a un número hexadecimal
 * @param num que corresponde a un entero
 * @return hexadecimal que es una cadena
 * @ÚltimaModificación: 14 de noviembre de 2021
 */
char* decimal_hexa(int num){
int t=0, i=0, j=0;
    char *temp=NULL, *hexadecimal=NULL;
    temp = (char*)malloc(sizeof(char));//Devuelve un apuntador de tamaño de char debido al sizeof
    strcpy(temp, "");

    do{
        t= num % 16;        
        num = (int)(num/16);
        //strcat, concatena
        switch(t){
            case 0:
                strcat(temp, "0");
                break;
            case 1:
                strcat(temp, "1");        
                break;
            case 2:
                strcat(temp, "2");
                break;
            case 3:
                strcat(temp, "3");
                break;
            case 4:
                strcat(temp, "4");
                break;
            case 5:
                strcat(temp, "5");
                break;
            case 6:
                strcat(temp, "6");
                break;
            case 7:
                strcat(temp, "7");
                break;
            case 8:
                strcat(temp, "8");
                break;
            case 9:
                strcat(temp, "9");
                break;
            case 10:             
                strcat(temp, "A");
                break;
            case 11:             
                strcat(temp, "B");
                break;
            case 12:
                strcat(temp, "C");
                break;
            case 13:
                strcat(temp, "D");
                break;
            case 14:
                strcat(temp, "E");
                break;
            case 15:
                strcat(temp, "F");
                break;
        }        
    }while(num > 0);
    hexadecimal = (char*)malloc(strlen(temp)*sizeof(char));//Reserva de memoria
    for(i=strlen(temp)-1, j=0; i >=0; i--, j++){
        hexadecimal[j] = temp[i];    
    }
    free(temp);
    temp = NULL;
    return hexadecimal;
}  


/**
 * @brief Función que realiza la conversión de un número octal a un número decimal
 * @param octal que es una cadena
 * @return num que corresponde a un entero
 * @ÚltimaModificación: 19 de noviembre de 2021 
 */
int octal_decimal(char *octal){
int num = 0, pot = 0;
    for(int i = strlen(octal)-1; i>=0; i--){
        switch(octal[i]){
            case '0':
                num = 0;
                break;
            case '1':
                num += pow(8, pot);
                break;
            case '2':
                num += 2*pow(8, pot);
                break;
            case '3':
                num += 3*pow(8, pot);
                break;
            case '4':
                num += 4*pow(8, pot);
                break;
            case '5':
                num += 5*pow(8, pot);
                break;
            case '6':
                num += 6*pow(8, pot);
                break;
            case '7':
                num += 7*pow(8, pot);
                break;
        }        
        pot = pot + 1; //Para que vaya aumentando la potencia
    }
    return num;
}


/**
 * @brief Fución que realiza la conversión de un número decimal a un número  octal
 * @param num que corresponde a un entero
 * @return octal que es una cadena
 * @ÚltimaModificación: 19 de noviembre de 2021 
 */
char* decimal_octal(int num){
int t=0, i=0, j=0;
    char *temp=NULL, *octal=NULL;
    temp = (char*)malloc(sizeof(char));
    strcpy(temp, "");

    do{
        t= num % 8;        
        num = (int)(num/8);
        switch(t){
            case 0:
                strcat(temp, "0");
            case 1:
                strcat(temp, "1");        
                break;
            case 2:
                strcat(temp, "2");  
                break;
            case 3:
                strcat(temp, "3");  
                break;
            case 4:
                strcat(temp, "4");  
                break;
            case 5:
                strcat(temp, "5");  
                break;
            case 6:
                strcat(temp, "6");  
                break;
            case 7:
                strcat(temp, "7");  
                break;
            
        }        
    }while(num>0);
    
    octal = (char*)malloc(strlen(temp)*sizeof(char));
    for(i=strlen(temp)-1, j=0; i >=0; i--, j++){
        octal[j] = temp[i];
    }
    free(temp);
    temp = NULL;
    return octal; 
}


//--------------------FUNCIONES QUE HACEN USO DE LAS ANTERIORMENTE PROGRAMADAS---------------------

/**
 * @brief Función que realiza la conversión de un número binario a un número hexadecimal
 * @param binario que es una cadena
 * @return hexadecimal que es una cadena
 * @ÚltimaModificación: 23 de noviembre de 2021 
 */
char* binario_hexa(char *binario){
int num = 0, pot = 0;
    for(int i = strlen(binario)-1; i>=0; i--){
        if(binario[i]=='1') 
            num= num + pow(2, pot);
        pot = pot + 1;
    }
    //Llamada a la función decimal_hexa() 
    num= decimal_hexa(num);
}


/**
 * @brief Funciones que realizan la conversión de un número hexadecimal a un número binario
 * @param hexadecimal, num; donde hexadecimal es una cadena y num corresponde a un entero
 * @return num,binario: donde num corresponde a un entero y binario es una cadena
 * @programador: Juárez Herrera Erick Adrián
 * @ÚltimaModificación: 4 de diciembre de 2021 
 */
char* hexa_binario(char *hexadecimal)
{
    //Llamada a la función hexa_decimal()
    hexa_decimal(hexadecimal);
}
int hexa_binario2(int num)
{
    //Llamada a la función conv_decimal_binario()
    conv_decimal_binario(num);
}


/**
 * @brief Funciones que realizan la conversión de un número binario a un número octal
 * @param binario, num; donde binario es una cadena y num corresponde a un entero 
 * @return num, octal; donde num corresponde a un entero y octal es una cadena
 * @programador: Juárez Herrera Erick Adrián 
 * @ÚltimaModificación: 5 de diciembre de 2021 
 */
char* binario_octal(char *binario)
{
    //Llamada a la función conv_binario_decimal()
    conv_binario_decimal(binario);
}
int binario_octal2(int num)
{
    //Llamada a la función decimal_octal
    decimal_octal(num);
}


/**
 * @brief Funciones que realizan la conversión de un número octal a un numero binario
 * @param octal, num; donde octal es una cadena y num corresponde a un entero 
 * @return num, binario; donde num corresponde a un entero y binario es una cadena
 * @programador: Juárez Herrera Erick Adrián 
 * @ÚltimaModificación: 5 de diciembre de 2021 
 */
char* octal_binario(char *octal)
{
    //Llamada a la función octal_decimal()
    octal_decimal(octal);
}
int octal_binario2(int num)
{
    //Llamada a la función conv_decimal_binario()
    conv_decimal_binario(num);
}