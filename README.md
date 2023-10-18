#include<SoftwareSerial.h>
void setup() {
  Serial.begin(9600);
  for(int i = 0; i<10; i++)
  {
    pinMode(1+i, OUTPUT);
  }
}

String itc_bin_num(long long number){
    long long binare = 0, n = 1;
    while (number > 0){
        binare += (number % 2) * n;
        n*=10;
        number/=2;
    }
    String str;
    int i = 0;
    while(number > 0){
        str[i] = number % 10;
        i++;
      }
}

void loop() {
  if(Serial.available()>0)
  {
    int a = Serial.parseInt();
    
  }
  
}

long long itc_pow(long long num, int step){
    long long num2 = 1;
    for (int i = 0; i < step; i++)
        num2 *= num;
    return num2;
}
*/
