#include <stdio.h>
int main(){
    int rows=3,cols=3,r,c;
    float matrix[rows][cols];
    for(r=0;r<rows;r++){
        for(c=0;c<cols;c++){
            scanf("%f",&matrix[r][c]);
        }
    }
    if(matrix[0][0]==matrix[1][1] && matrix[0][0]==matrix[2][2] && matrix[1][1]==matrix[2][2] && matrix[0][1]==0 && matrix[0][2]==0 && matrix[1][0]==0 && matrix[1][2]==0 && matrix[2][0]==0 && matrix[2][1]==0){
        printf("This is a scalar matrix");
    }else{
        printf("This is not a scalar matrix");
    }
    // for(r=0;r<rows;r++){
    //     for(c=0;c<cols;c++){
    //         printf("%f ",matrix[r][c]);
    //     }
    //     printf("\n");
    // }
    return 0;
}