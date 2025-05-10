#include <stdio.h>

int main(){
    int month;

    scanf("%d", &month);

    switch(month)// int
    {
        case 1:     printf("Jan."); break;
        case 2:     printf("Feb."); break;
        case 3:     printf("Mar."); break;
        case 4:     printf("Apr."); break;
        case 5:     printf("May"); break;
        case 6:     printf("June"); break;
        case 7:     printf("July"); break;
        case 8:     printf("Aug."); break;
        case 9:     printf("Sept."); break;
        case 10:    printf("Oct."); break;
        case 11:    printf("Nov."); break;
        case 12:    printf("Dec."); break;

        default:
            printf("Wrong month entered!\n");
            break;
    }
    return 0;
}