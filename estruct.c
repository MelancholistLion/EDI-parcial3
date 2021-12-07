/*
    Escriba un programa en C que dada la siguiente declaración de estructuras:
    typedef struct {
        char nombre[40];
        char pais[25];
    }DatosPersonales;
    typedef struct{
        DatosPersonales datos;
        char deporte[30];
        int numMedallas;
    }Deportista;
    1. Realice una función que lea de un archivo de TEXTO la información de los deportistas.
    2. Realice una función que reciba los deportistas leídos y calcule e imprima el número de medallas por
    deporte.
    Nota: Dentro del código existe un arreglo que contiene los nombres de todos los deportes que existen en el archivo.
        char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};
*/

#include <stdio.h>
#include <string.h>

#define N 20

int lee(Deportista *a[100])
int imprime(Deportista a, int tam);

typedef struct {

    char nombre[40];
    char pais[25];

}DatosPersonales;

typedef struct{
    DatosPersonales datos;
    char deporte[30];
    int numMedallas;

}Deportista;

int main()
{
    Deportista deportistas[100];
    // Puede cambiar la declaración de este arreglo a donde lo considere necesario
    char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};

    dep = lee(deportistas);
    imprime(deportistas,tam);

    return 0;
}

int lee(Deportista *a[100])
{
    FILE *ptr;
    ptr=fopen("deportistas.txt","r");

    if(ptr==NULL)
    {
        printf("Error: No existe el archivo cal.txt");
        exit(0);
    }


    while(!feof(ptr))
    {
        int i=0;
        fscanf(ptr,"%s",a[i]->datos->nombre);
        fscanf(ptr,"%s",a[i]->datos->pais);
        fscanf(ptr,"%s",a[i]->deporte);
        fscanf(ptr,"%d",a[i]->numMedallas);
        i++;
    }

    fclose(ptr);
    return i;
}


void imprime(Deportista a[100],int tam)
{
    int i;
    int nat=0,atl=0,cicl=0,gim=0,equim=0,esgr=0;
    char dep[30];
    for(i=0;i<tam;i++)
    {
        dep = a[i].deporte;

        switch(getc(dep))
        {
            case 'Natación':
                nat=nat+a[i].numMedallas;
            break;
            case 'Atletismo':
                atl=atl+a[i].numMedallas;
            break;
            case 'Ciclismo':
                cicl=cicl+a[i].numMedallas;
            break;
            case 'Gimnasia':
                gim=gim+a[i].numMedallas;
            break;
            case 'Equitacion':
                equim=equim+a[i].numMedallas;
            break;
            case 'Esgrima':
                esgr=esgr+a[i].numMedallas;
            break;
        }
    }
    printf("Medallas de: \n");
    printf("Natacion: %d\n",nat);
    printf("Atletismo: %d\n",atl);
    printf("Ciclismo: %d\n",cicl);
    printf("Gimnasia: %d\n",gim);
    printf("Equitacion: %d\n",equim);
    printf("Esgrima: %d\n",esgr);
}
