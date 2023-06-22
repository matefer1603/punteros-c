#include <stdio.h>
#include <math.h>
#include "funciones.h"

float calcularDistancias(float x1, float y1, float z1, float x2, float y2,float z2 ){
    float dist=sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    return dist;
}

float calcularPerimetro( float puntos[4][3], float *a, float *b, float *c,float *d,float *e,float *f){
    *a = calcularDistancias(puntos[0][0],puntos[0][1],puntos[0][2],puntos[1][0],puntos[1][1],puntos[1][2]);
    *b = calcularDistancias(puntos[0][0],puntos[0][1],puntos[0][2],puntos[2][0],puntos[2][1],puntos[2][2]);
    *c = calcularDistancias(puntos[2][0],puntos[2][1],puntos[2][2],puntos[1][0],puntos[1][1],puntos[1][2]);

    *d = calcularDistancias(puntos[0][0],puntos[0][1],puntos[0][2],puntos[3][0],puntos[3][1],puntos[3][2]);
    *e = calcularDistancias(puntos[1][0],puntos[1][1],puntos[1][2],puntos[3][0],puntos[3][1],puntos[3][2]);
    *f = calcularDistancias(puntos[2][0],puntos[2][1],puntos[2][2],puntos[3][0],puntos[3][1],puntos[3][2]);

    
    float perimetro=*a+*b+*c+*d+*e+*f;
    return perimetro;
}

float calcularArea(float l1, float l2, float l3){
    float perimetro=l1+l2+l3;
    float s=perimetro/2;
    float area=sqrt(s*(s-l1)*(s-l2)*(s-l3));
    return area;
}
void calcBaricentro( float puntos[4][3],float *gx, float *gy, float *gz){
    *gx=(puntos[0][0]+puntos[1][0]+puntos[2][0])/3;
    *gy=(puntos[0][1]+puntos[1][1]+puntos[2][1])/3;
    *gz=(puntos[0][2]+puntos[1][2]+puntos[2][2])/3;
}
float calVol(float areaBase,float gx,float gy,float gz, float puntos[4][3]){
    float altura=calcularDistancias(gx,gy,gz,puntos[3][0],puntos[3][1],puntos[3][2]);
    float volumen=altura*areaBase/3;
    return volumen;

}