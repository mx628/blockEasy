#include <iostream>
#include "easy.h"

using namespace std;

int itc_skv(int num){
    if(num > 0)
        return num*num;
    return -1;
}

int itc_spr(int a, int b){
    if(a > 0 && b > 0)
        return a*b;
    return -1;
}

int itc_str(int a, int b, int c){
    if(a + b <= c || a + c <= b || b + c <= a)
        return -1;
    int p = (a + b + c) / 2;
    int s = itc_sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

double itc_scir(int radius){
    if(radius > 0)
        return 3.14*radius * radius;
    return -1;
}

double itc_pow(int num, int step){
    double num2 = 1;
    double num3 = num;
    if (step < 0) {
        num3 = 1 / num3;
        step = -step;
    }
    for (int i = 0; i < step; i++)
        num2 *= num3;
    return num2;
}
