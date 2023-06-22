#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float puntos[4][3]={{0,0,0},{3,0,0},{0,0,3},{1,7,1}};
    float a, b, c, d, e, f,gx,gy,gz;
    float *dist;
    float perimetro=calcularPerimetro(puntos,&a,&b,&c,&d,&e,&f);
    float area1=calcularArea(a,b,c);
    float area2=calcularArea(a,d,e);
    float area3=calcularArea(c,e,f);
    float area4=calcularArea(b,d,f);
    float areaSup=area1+area2+area3+area4;
    calcBaricentro(puntos,&gx,&gy,&gz);
    float volumen=calVol(area1,gx,gy,gz,puntos);

    printf("el perimetro de triangulo es: %f\n",perimetro);
    printf("el area superficial de triangulo es: %f\n",areaSup);
    printf("el volumen del triangulo es: %f\n",volumen);

    return 0;
}


