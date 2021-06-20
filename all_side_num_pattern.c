// Check the problem statement here: https://www.hackerrank.com/challenges/printing-pattern-2/problem?h_r=next-challenge&h_v=zen

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int i;
    for(i = 1; i<=n; i++){
        for(int j = 1; j <= n; j++){
            
            if(j<i) printf("%d ",(n-j+1));
            else if(j>=i) printf("%d ",(n-i+1));
            
        }
        for(int j=n+1;j<=(2*n-1);j++){
            if(i + j> (2*n))    printf("%d ",(n-((2*n-1)-j)));
            else if(i+j <=(2*n))    printf("%d ",(n-i+1));
        }
        printf("\n");
    }
    for(i = n-1;i >= 1; i--){
        for(int j = 1; j <= n; j++){
            
            if(j<i) printf("%d ",(n-j+1));
            else if(j>=i) printf("%d ",(n-i+1));
            
        }
        for(int j=n+1;j<=(2*n-1);j++){
            if(i + j> (2*n))    printf("%d ",(n-((2*n-1)-j)));
            else if(i+j <=(2*n))    printf("%d ",(n-i+1));
        }
        printf("\n");
    }
    return 0;
}
