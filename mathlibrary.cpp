#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "math_library.h"

//移项矩阵
void transpose1x2(double (&in)[1][2], double (&out)[2][1]){

    for (int i=0; i<1; i++){ // 行
    
        for (int j=0; j<2; j++){ // 列
        
            out[j][i] = in[i][j];
        }
    }
}

//移项矩阵
void transpose1x3(double (&in)[1][3], double (&out)[3][1]){

    for (int i=0; i<1; i++){ // 行
    
        for (int j=0; j<3; j++){ // 列
        
            out[j][i] = in[i][j];
        }
    }
}

//移项矩阵
void transpose2x1(double (&in)[2][1], double (&out)[1][2]){

    for (int i=0; i<2; i++){ // 行
    
        for (int j=0; j<1; j++){ // 列
        
            out[j][i] = in[i][j];
        }
    }
}

//移项矩阵
void transpose2x2(double (&in)[2][2], double (&out)[2][2]){

    for (int i=0; i<2; i++){ // 行
    
        for (int j=0; j<2; j++){ // 列
        
            out[j][i] = in[i][j];
        }
    }
}

//移项矩阵
void transpose2x3(double (&in)[2][3], double (&out)[3][2]){

    for (int i=0; i<2; i++){ // 行
    
        for (int j=0; j<3; j++){ // 列
        
            out[j][i] = in[i][j];
        }
    }
}

//移项矩阵
void transpose3x2(double (&in)[3][2], double (&out)[2][3]){

    for (int i=0; i<3; i++){ // 行
    
        for (int j=0; j<2; j++){ // 列
        
            out[j][i] = in[i][j];
        }
    }
}

//移项矩阵
void transpose3x3(double (&in)[3][3], double (&out)[3][3]){

    for (int i=0; i<3; i++){ // 行
    
        for (int j=0; j<3; j++){ // 列
        
            out[j][i] = in[i][j];
        }
    }
}

