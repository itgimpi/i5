#include<stdio.h>
int main(){
    char s1[] = {'l', 'a', 'p'}; // NEVALJA
    printf("%s\n", s1);
    char s2[] = {'l', 'a', 'p', '\0'}; // VALJA
    printf("%s\n", s2); 
    char s3[] = {'l', 'a', 'p', 0}; // VALJA
    printf("%s\n", s3);  
    char s4[] = "lap top"; // NAJBOLJE   
    printf("%s\n", s4);    

    return 0;
}