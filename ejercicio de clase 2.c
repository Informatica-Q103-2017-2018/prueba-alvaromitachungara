#include <stdio.h>
//EJERCICIO 1 TEMA 2 APARTADO A)
/**Escriba un programa que permita averiguar qué acrónimo está representado por los códigos ASCII:
101 116 115 105 100 105*/



int main(){
        int x,y,z,t,u; //101 116 115 105 100 105

        //DEFINIMOS VARIABLES
        x = 65;
        y = 69;
        z = 73; 
        t = 79; 
        u = 85; 
// A cada letra le corresponde un numero por lo que escribimos el numero y le pedimos
// que nos de ese numero en letra %c de character
        
        printf("\nPrimera letra %c.\n",x);//quiero que se guarde un caracter en la variable y
        printf("\nSegunda letra %c.\n",y);
        printf("\nTercera letra %c.\n",z);
        printf("\nCuarta letra %c.\n",t);
        printf("\nQuinta letra %c.\n",u);
        
        //kasksao
        return 0;
    }
