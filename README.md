# blockEasy
домашнее задание

#include <iostream>
#include <string>
using namespace std;


string itc_hello_str(string name){
    return "Hello, " + name + '\n';
}

long long itc_len(string str){
    int i = 0;
    while(str[i] != '\0')
        ++i;
    return i;
}

int main()
{
    cout << itc_len("Alegqwkf");
    return 0;
}

/*long long itc_bin_num(long long number){
    long long bin = 0;
    long long n = 1;
    while(number > 0){
        if(number > itc_pow(2, n) && number - itc_pow(2, n) )
        number/=10;
    }
}

long long itc_pow(long long num, int step){
    long long num2 = 1;
    for (int i = 0; i < step; i++)
        num2 *= num;
    return num2;
}
*/
