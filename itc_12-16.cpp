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
    if(a <= 0 || b <= 0 || c <= 0)
        return -1;
    if(a + b <= c || a + c <= b || b + c <= a)
        return -1;
    double p = (a + b + c) / 2.0;
    return itc_sqrt((int)(p * (p - a) * (p - b) * (p - c)));
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
/*
#include <iostream>
#include <string>
using namespace std;

int itc_pow(int num, int step){
    int num2 = 1;
    int num3 = num;
    for (int i = 0; i < step; i++)
        num2 *= num3;
    return num2;
}

int itc_len_num(long long number){
    if(number == 0)
        return 1;
    int len = 0;
    while (number > 0){
        len++;
        number/=10;
    }
    return len;
}
//выше функции для itc_bin_num
string itc_bin_num(long long number){
    string binst = "";
    if(number < 0)
        number *= -1;
    char binare;
    int n = 1;
    while (number > 0){
        binare = number % 2 + '0';
        binst = binst + binare;
        number/=2;
    }
    for(int i = 0; i < binst.length()/2; i++){
        char tmp = binst[i];
        binst[i] = binst[binst.length() - i - 1];
        binst[binst.length() - i - 1] = tmp;
    }
    return binst;
}
string bin_in_computer(long long number, int byte, int codetype){
    string bin = itc_bin_num(number);
    string zero = "";
    for(int i = 0; i < byte - bin.length(); i++)//помнить про 0
        zero+='0';
    if()
    return zero + bin;
}
int main()
{
    cout << bin_in_computer(10, 8, 0) << endl;
    return 0;
}
*/
