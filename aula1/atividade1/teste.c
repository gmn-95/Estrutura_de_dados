#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int mat[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%i", &mat[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%i", mat[i][j]);
        }
    }

    return 0;
}
