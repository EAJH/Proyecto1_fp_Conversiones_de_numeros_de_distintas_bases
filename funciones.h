#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

//--------------------PROTOTIPOS DE LAS FUNCIONES QUE REALIZAN LAS CONVERSIONES CON PARTE DECIMAL--------------------
int conv_binario_decimal(char *binario);//Ej. Esta función retorna un número entero, por eso se pone int al inicio.
char* conv_decimal_binario(int num);//Ej. Esta función retorna una cadena de caracteres, por eso se pone char* al inicio.
int hexa_decimal(char *hexadecimal);
char* decimal_hexa(int num);//Nota: No importa si el asterisco está pegado al nombre o al tipo de la función, es lo mismo.
int octal_decimal(char *octal);
char* decimal_octal(int num);

//--------------------PROTOTIPOS DE LAS FUNCIONES QUE HACEN USO DE LAS ANTERIORMENTE PROGRAMADAS-------------------- 
char* binario_hexa(char *binario);
char* hexa_binario(char *hexadecimal);
int hexa_binario2(int num);
char* binario_octal(char *binario);
char* octal_binario(char *octal);
int binario_octal2(int num);

#endif  //!__CONVERSIONES_H__

//--------------------NOTAS RESPECTO A LA MEMORIA DINÁMICA--------------------
//Su principal ventaja frente a la estática, es que su tamaño puede variar durante la ejecución del programa. 
//En C, el programador es encargado de liberar esta memoria cuando no la utilice más. 
//El uso de memoria dinámica es necesario cuando no se sabe el numero exacto de datos/elementos a tratar.