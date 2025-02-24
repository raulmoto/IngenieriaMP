#include <stdio.h>
#include <stdlib.h>
/**
    Pre: ---
    Post: Define la estructura de un cliente
*/
struct Cliente{
    char nombre,DNI,apellido[50];
    char tipo[6]
};
/**
    Pre: ---
    Post: muestras el menú de las operciones disponibles en el sistema
*/
int menu(){
    int opcion;
    printf("1.Gestion de clientes\n2.Gestion de habitaciones\n3.Gestion de reservas\n4.Informaes económicos\n5.Importar habitaciones desde ficheros\n0.salir\nElija una opcion: ");
    scanf("%d",&opcion);
    return opcion;
}
/**
    Pre: ---
    Post: muestras el menú de las operciones disponibles en para el cliente
*/
int menuCliente(){
    int opcion;
    printf("GESTION DE CLIENTES\n-------------------------------------------\n1.Alta\n2.Baja\n3.Modificacion\n4.Consulta\n5.Listado general\n6.Listado por categoria\n0.Volver al menu principal\nElija una opcion: ");
    scanf("%d",&opcion);
    return opcion;
}
/**
    Pre: ---
    Post: gestionamos las operaciones que se pueden hacer con el ciente
*/
int operarConLiente(int opcion){
    switch(opcion){
    case 0:
        opcion = menu();
        break;
    }
    return 0;
}

int main()
// tenedremos dos contadores, uno que refleje el totl de habitaciones en el mometo y el otro que volcremos en fichero cuando terminemos el programa
{
    const char *ruta = "C:\\Users\\uva\\Desktop\\clientes.dat";
    FILE *ficheroNuevo = fopen(ruta, "wb");
    if (ficheroNuevo == NULL){
        printf("ERROR AL ABRIR EL FICHERO");
        return 1;
    }
    fprintf(ficheroNuevo,"este es unarchivo de prueba\n");
    fclose(ficheroNuevo);
    int opcion = menu();
    // analizamos la opcion elegida en el menú princial
    switch(opcion){
    case 1:
        opcion = menuCliente();
        break;
    }
    return 0;
}

