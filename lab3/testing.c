#include <stdio.h>
#include <stdlib.h>

long factorial(int arg) {
    long result = 1;
    int i;
    for (i = 2; i <= arg; ++i) {
        result *= i;
     }
    return result;
}

int main(int argc, char** argv) {
    printf("Enter an integer to calculate the factorial: \n");
    int arg;
    fflush(stdout);
    scanf("%d", &arg);
    
    printf("factorial(%d) = %ld\n", arg, factorial(arg));

    return (EXIT_SUCCESS);
}
 
