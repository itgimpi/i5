#include <stdio.h>
#include <float.h>
/* Float */

int main() {
    printf("Size of Float is %d Bytes\n", sizeof(float));
    printf("Size of Double is %d Bytes\n", sizeof(double));
    printf("Size of Long Double is %d Bytes\n", sizeof(long double));

    //printf("Size of Float is %d Bits\n", sizeof(float)*8);
    //printf("Size of Double is %d Bits\n", sizeof(double)*8);
    //printf("Size of Long Double is %d Bits\n", sizeof(long double)*8);  
    
    printf("Max Float is (f) %f\n", FLT_MAX);
    printf("Max Float is (g) %g\n", FLT_MAX);
    printf("Max Float is (e) %e\n", FLT_MAX);
    printf("Min Float is (e) %e\n", FLT_MIN);

    printf("Max Float is (le) %le\n", DBL_MAX);
    printf("Min Float is (le) %le\n", DBL_MIN);
    
    printf("Max Float is (e) %Le\n", LDBL_MAX);
    printf("Min Float is (e) %Le\n", LDBL_MIN);

    printf("Float is %d\n", FLT_DIG);
    printf("Double is %d\n", DBL_DIG);
    printf("Long Double is %d\n", LDBL_DIG);    
    return 0;  
    
    }