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

//移项矩阵
double **transpose(double **in, int r, int c){

    std::cout << "In function" << std::endl;
    double **out;

    out = (double**) malloc(sizeof(double*)*c);

    for (int i=0; i<c; i++){
    
        out[i] = (double*) malloc(sizeof(double)*r);
    }

    for (int i=0; i<c; i++){
    
        for (int j=0; j<r; j++){
        
            out[i][j] = in[j][i];
        }
    }

    std::cout << "About to return" << std::endl;

    return out;

}

//逆矩阵
void inv2x2(double (&in)[2][2], double (&out)[2][2]){

    double det = in[0][0]*in[1][1] - in[0][1]*in[1][0];

    if (det == 0){
    
        std::cout << "Error: determinant is 0" << std::endl;
        return;
    }
    
    out[0][0] = (1.0/det)*in[1][1];
    out[1][1] = (1.0/det)*in[0][0];
    out[0][1] = (-1.0/det)*in[0][1];
    out[1][0] = (-1.0/det)*in[1][0];
}

//逆矩阵
void inv3x3(double (&in)[3][3], double (&out)[3][3]){

    double det1 = in[0][0] * (in[1][1]*in[2][2] - in[1][2]*in[2][1]);
    double det2 = in[0][1] * (in[1][0]*in[2][2] - in[1][2]*in[2][0]);
    double det3 = in[0][2] * (in[1][0]*in[2][1] - in[1][1]*in[2][0]);

    double det = det1 - det2 + det3;

    if (det == 0){
    
        std::cout << "Error: determinant is 0" << std::endl;
        return;
    }

    out[0][0] = in[1][1]*in[2][2] - in[1][2]*in[2][1];
    out[1][0] = -1.0*(in[1][0]*in[2][2] - in[1][2]*in[2][0]);
    out[2][0] = in[1][0]*in[2][1] - in[1][1]*in[2][0];

    out[0][1] = -1.0*(in[0][1]*in[2][2] - in[0][2]*in[2][1]);
    out[1][1] = in[0][0]*in[2][2] - in[0][2]*in[2][0];
    out[2][1] = -1.0*(in[0][0]*in[2][1] - in[0][1]*in[2][0]);

    out[0][2] = in[0][1]*in[1][2] - in[0][2]*in[1][1];
    out[1][2] = -1.0*(in[0][0]*in[1][2] - in[0][2]*in[1][0]);
    out[2][2] = in[0][0]*in[1][1] - in[0][1]*in[1][0];

    for (int i=0; i<3; i++){
    
        for (int j=0; j<3; j++){
        
            out[i][j] *= 1.0/det;
        }
    }
}
