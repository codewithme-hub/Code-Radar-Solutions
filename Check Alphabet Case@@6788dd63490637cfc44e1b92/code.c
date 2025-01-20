#include <stdio.h>
int main() {
    char character;
    scanf("%c",&character);
    if(character>='a' && character<='z'){
        printf("Lowercase");
    }
    else if(character>='A' && character<='Z'){
        printf("Uppercase");
    }

    //printf("%s", welcome());
    return 0;
}