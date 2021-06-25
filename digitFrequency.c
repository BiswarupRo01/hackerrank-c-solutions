// Check the problem statement : https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000];
    scanf("%[^\n]",word);
    int freq[10] = {0,0,0,0,0,0,0,0,0,0};
    
    for(int i=48; i<=57; i++){
        for(int j=0; j<strlen(word); j++){
            int x = word[j];
            
            if(x == i){
                freq[i-48] = freq[i-48] + 1;
            }
        }
        //printf("\n");
    }
    
    for(int i = 0; i < 10; i++){
        printf("%d ",freq[i]);
    }
    //printf("\n");

    return 0;
}
