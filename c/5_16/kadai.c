#include <stdio.h>
float tyouhoukei(float a,float b);
int main(void){
    float mennseki = tyouhoukei(25.0,4.0);
    printf("%f\n",mennseki);
    return 0;
}

float tyouhoukei(float a,float b){
    float mennseki;
    mennseki=a*b;
    return mennseki;
}


