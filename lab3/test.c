#include <stdio.h>
#include <stdlib.h>

long factorial(int arg);

void testFactorial() {
    int arg;
    long result = factorial(arg);
    if(1) {
        printf("%%TEST_FAILED%% time=0 testname=testFactorial (newsimpletest) message=When value is 1 this statement is executed.\n");
    }
}


void testNew() {
    int arg = 8;
    long result = factorial(arg);
    if(result != 40320) {
        printf("%%TEST_FAILED%% time=0 testname=testNew (newsimpletest) message=Error calculating %d factorial.\n", arg);
    }
}


int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% newsimpletest\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%%  testFactorial (newsimpletest)\n");
    testFactorial();
    printf("%%TEST_FINISHED%% time=0 testFactorial (newsimpletest)\n");

    printf("%%TEST_STARTED%%  testNew (newsimpletest)\n");
    testNew();
    printf("%%TEST_FINISHED%% time=0 testNew (newsimpletest)\n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
