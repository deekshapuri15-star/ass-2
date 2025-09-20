
#include<stdio.h>
#include<math.h> 

int main() {
    int a;
    int x;
    double sqr;

    printf("Enter a value for x: "); 
    scanf("%d", &x); 

    a = x * x + 5 * x + 25; 
    printf("Value of a is: %d\n", a); 

    sqr = pow(a, 0.5); 
    printf("Square root is: %lf\n", sqr);

    return 0;
    }
