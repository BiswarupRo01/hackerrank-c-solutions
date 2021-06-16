// Check the problem statement here: https://www.hackerrank.com/challenges/pointer-in-c/problem
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int a_prime = *a + *b; 
    int b_prime;
    if( (*a - *b)>=0)    b_prime = *a - *b;
    else    b_prime = *b - *a;
    //printf("%d\n%d",a_prime,b_prime);
    *a = a_prime;
    *b = b_prime;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
