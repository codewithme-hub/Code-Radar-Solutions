#include <stdio.h>
int main() {
    char charcter;
    scanf("%c",&charcter);
    if(charcter=='a'|| charcter=='e'|| charcter=='i'|| charcter=='o'|| charcter=='u'){
        printf("Vowel\n");
    }
    else if(isalpha(charcter)) {
        printf("Consonant\n");
    }
    else if(isdigit(charcter)){
        printf("Digit\n");
    }
    else{
        printf("Special Character\n");
    }
    return 0;
}