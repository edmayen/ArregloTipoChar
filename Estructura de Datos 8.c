#include<stdio.h>
#define A 4
#define B 50
void cargar(char[A][B]);
void imprimir(char[A][B]);

int main()
{
    system("color F0");
    char cadena[A][B];
    printf("\n\t\t\tArreglo Bidimensional, Tipo Cadena\n\n");
    cargar(cadena);
    imprimir(cadena);
    getchar();
    getchar();
}

void cargar(char cadena[A][B])
{
    int i,j;
    char aux;
    printf("\nCargar Arreglo, Caracter por Caracter.\n\n");
    for(i=0;i<A;++i)
    {
        for(j=0;j<B-1&&(aux=getchar())!='\n';++j)
        {
            cadena[i][j]=aux;
        }
        cadena[i][j]='\0';
    }
}

void imprimir(char cadena[A][B])
{
    int i,j;
    printf("\n\nImpresion del Arreglo, Caracter por Caracter.\n\n");
    for(i=0;i<A;++i)
    {
        for(j=0;j<B&&cadena[i][j]!='\0';++j)
        {
            putchar(cadena[i][j]);
        }
        putchar('\n');
    }

}
