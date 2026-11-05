#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Insira a data do ano no formato dd mm aaaa: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("Data inserida: %d ", dia);

    if (mes >= 1 && mes <= 12)
    {
        switch (mes)
        {
        case 1:
            printf("de janeiro ");
            break;
        case 2:
            printf("de fevereiro ");
            break;
        case 3:
            printf("de marco ");
            break;
        case 4:
            printf("de abril ");
            break;
        case 5:
            printf("de maio ");
            break;
        case 6:
            printf("de junho ");
            break;
        case 7:
            printf("de julho ");
            break;
        case 8:
            printf("de agosto ");
            break;
        case 9:
            printf("de setembro ");
            break;
        case 10:
            printf("de outubro ");
            break;
        case 11:
            printf("de novembro ");
            break;
        case 12:
            printf("de dezembro ");
            break;
        
        default:
            printf("Insira um mes valido...\n\n");
            break;
        }
    }

    printf("de %d\n\n", ano);
    
    return 0;
}