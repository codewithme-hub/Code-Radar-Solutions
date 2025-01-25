#include <stdio.h>
int main() {
    int month;
    scanf("%d",&month);
    switch(month){
        case '1':
            printf("31\n");
            break; //jan
        case '2':
            printf("28\n");
            break; //feb
        case '3':
            printf("31\n");
            break; //march
        case '4':
            printf("30\n");
            break; //april
        case '5':
            printf("31\n");
            break; //may
        case '6':
            printf("30\n");
            break;//june
        case '7':
            printf("31\n");
            break;//july
        case '8':
            printf("31\n");
            break;//august
        case '9':
            printf("30\n");
            break;//sep
        case '10':
            printf("31\n");
            break;//oct
        case '11':
            printf("30\n");
            break;//nov
        case '12':
            printf("31\n");
            break;//dec
        default:
            printf("Invalid month\n");
            break;
    }
    
    return 0;
}