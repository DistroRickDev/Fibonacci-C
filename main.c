#include <stdio.h>

void fibonacci(void);
long double pow_(double x, double y);

int main() {
    fibonacci();
    return 0;
}

long double pow_(double x, double y){
    const double multi=x;
    for(int i=1; i<y; i++)
    {
        x=x*multi;
    }
    return x;
}

void fibonacci(void)
{
    unsigned long int x = 1;
    unsigned long int y=0;
    unsigned long int z = 0;
    for(int i =0;x<pow_(2, 16);i++){
        printf("%llu\n",x);
        z=x+y;
        y=x;
        x=z;
    }
}