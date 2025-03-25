#include<stdio.h>
int main(){
    long long int a;
    long long int n;
    long long int z=0;
    long long int i;
    scanf("%lld",&n);
    for(i=0; i < n; i++){
        scanf("%lld",&a);
        z+=a;}
    printf("%lld",z);
    return 0;
}