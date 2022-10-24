#include <stdio.h>
#include <stdlib.h>
// Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto
//y devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main.

//Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer parámetro y un carácter
//como segundo y devuelva la cantidad de veces que ese carácter aparece en la cadena


//Dada la estructura Notebook(id, procesador, marca, precio) generar una función que
//permita ordenar un array de dicha estructura por marca. Ante igualdad de marca deberá
//ordenarse por precio.
//Hardcodear datos y mostrarlos desde el main.

#define TAMNOTE 3
typedef struct
{
    int id;
    char procesador[30];
    char marca[30];
    float precio;
} eNotebook;

int contarCaracteres(char cadena[],char caracter);
void aplicarDescuento(int *pPrecio);
int ordenarJugadoresConfederacionyNombre(eNotebook notebooks[],int TAMNOTE);





int main()
{
    int precio=100;
    eNotebook noteeboks[3]=
    {
        {
            1,"abc","pepe",10,
        },
        {
            1,"cbd","luis",5,
        },
        {
            1,"zy","jorge",50,
        }
    };
    aplicarDescuento(&precio);
    printf("%d",precio);
    return 0;
};


void aplicarDescuento(int *pPrecio)
{
    int porcentaje;
    porcentaje=(*pPrecio)*(5/100);
    *pPrecio= *pPrecio-porcentaje;
};

int contarCaracteres(char cadena[],char caracter)
{
    int contador;
    int i=0;
    while(cadena[i]!= '\0')
    {
        if((cadena[i] == caracter))
        {

            contador++;
        }
    }
    return contador;
}

int ordenarJugadoresConfederacionyNombre(eNotebook notebooks[],int tamNotebooks)
{
    int todoOk = 0;
    eNotebook auxNotebook;
    if (notebooks != NULL && tamNotebooks > 0 )
{


        for (int i = 0; i < tamNotebooks - 1; i++)
        {
            for (int j = i + 1; j < tamNotebooks; j++)
            {



                if (((strcmp(notebooks[i].marca,
                             notebooks[j].marca) > 0)
                        || (strcmp((notebooks[i].marca,
                                    notebooks[j].marca))) == 0)
                        && notebooks[i].precio > notebooks[j].precio)
                {
                    auxNotebook = notebooks[i];
                    notebooks[i] = notebooks[j];
                    notebooks[j] = auxNotebook
                }
            }
        }
    printf("Lista ordenada exitosamente...\n\n");


    todoOk = 1;
}
return todoOk;
}
}
