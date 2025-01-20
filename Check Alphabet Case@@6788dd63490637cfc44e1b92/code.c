#include <stdio.h>
int main() {
    char character;
    scanf("%c",&character);
    if(character>='a' && character<='z'){
        printf("Lowercase\n");
    }
    else if(character>='A' && character<='Z'){
        printf("Uppercase\n");
    }
    else{
        printf("Not an alphabet\n")
    }

    //printf("%s", welcome());
    return 0;
}