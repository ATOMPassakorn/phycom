#include <stdio.h>
int main(){
    int rows=3,cols=3,r,c,r2,c2;
    float matrix[rows][cols],matrix2[rows][cols],result[rows][cols];
    for(r=0;r<rows;r++){
        for(c=0;c<cols;c++){
            scanf("%f",&matrix[r][c]);
        }
    }
    for(r2=0;r2<rows;r2++){
        for(c2=0;c2<cols;c2++){
            scanf("%f",&matrix2[r2][c2]);
        }
    }
    // for(r=0;r<rows;r++){
    //     for(c=0;c<cols;c++){
    //         printf("%f ",matrix[r][c]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for(r2=0;r2<rows;r2++){
    //     for(c2=0;c2<cols;c2++){
    //         printf("%f ",matrix2[r2][c2]);
    //     }
    //     printf("\n");
    // }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            result[i][j]=0.0;
            for(int k=0;k<cols;k++){
                result[i][j]+=matrix[i][k]*matrix2[k][j];
            }
        }
    }
    printf("A x B\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%.2f ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}