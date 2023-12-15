#include <stdio.h>
#include <stdlib.h>
int main (){

    int X, Y, Z, x, y, z;
    scanf("%d %d %d", &X, &Y, &Z);
    x = abs(X);
    y = abs(Y);
    z = abs(Z);

    if(-100<X && X<100 && -100<Y && Y<100 && -100<Z && Z<100){
        if(X!=Z && X!=Z && Z!=Y){
    if(X == 0 || Y == 0 || Z == 0){
        printf("0");
    }
    if (Y>0 && Z>0 && X>0){
        if (x<y && x<z){
            printf("2");
        }else if (y<x && y<z)
        {
            printf("4");
        }else if (z<X && z<y)
        {
            printf("5");
        }
    }else if (Y>0 && Z>0 && X<0){
        if (x<y && x<z){
            printf("1");
        }else if (y<x && y<z)
        {
            printf("3");
        }else if (z<x && z<y)
        {
            printf("6");
        }
    }else if (Y<0 && Z>0 && X<0){
        if (x<y && x<z){
            printf("4");
        }else if (y<x && y<z)
        {
            printf("2");
        }else if (z<x && z<y)
        {
            printf("7");
        }
    }else if (Y<0 && Z>0 && X>0){
        if (x<y && x<z){
            printf("3");
        }else if (y<X && y<z)
        {
            printf("1");
        }else if (z<x && z<y)
        {
            printf("8");
        }
    }else if (Y>0 && Z<0 && X>0){
        if (x<y && x<z){
            printf("6");
        }else if (y<x && y<z)
        {
            printf("8");
        }else if (z<x && z<y)
        {
            printf("1");
        }
    }else if (Y>0 && Z<0 && X<0){
        if (x<y && x<z){
            printf("5");
        }else if (y<x && y<z)
        {
            printf("7");
        }else if (z<x && z<y)
        {
            printf("2");
        }
    }else if (Y<0 && Z<0 && X<0){
        if (x<y && x<z){
            printf("8");
        }else if (y<x && y<z)
        {
            printf("6");
        }else if (z<x && z<y)
        {
            printf("3");
        }
    }else if (Y<0 && Z<0 && X>0){
        if (x<y && x<z){
            printf("7");
        }else if (y<x && y<z)
        {
            printf("5");
        }else if (z<x && z<y)
        {
            printf("4");
        }
    }
    }
    }

    return 0;
}
