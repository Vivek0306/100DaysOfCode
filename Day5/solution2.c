#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int numArray[10],i,j,k,n;
    for(i=0; i < 10; i++){
        numArray[i] = 0;
    }
    char input[1000];
    scanf("%s", &input);
    for(i=0; i < strlen(input); i++){
        if (isdigit(input[i])){
            switch (input[i])
            {
            case '0':
                numArray[0]+=1;
                break;
            case '1':
                numArray[1]+=1;
                break;
            case '2':
                numArray[2]+=1;
                break;
            case '3':
                numArray[3]+=1;
                break;
            case '4':
                numArray[4]+=1;
                break;
            case '5':
                numArray[5]+=1;
                break;
            case '6':
                numArray[6]+=1;
                break;
            case '7':
                numArray[7]+=1;
                break;                        
            case '8':
                numArray[8]+=1;
                break;
            case '9':
                numArray[9]+=1;
                break;                
            default:
                break;
            }
        }
    }
    for(i=0; i < 10; i++){
        printf("%d ",numArray[i]);
    }
    return 0;
}
