#ifndef MATH_LIBRARY_H
#define MATH_LIBRARY_H

void transpose1x2(double (&in)[1][2], double (&out)[2][1]);
void transpose1x3(double (&in)[1][3], double (&out)[3][1]);
void transpose2x1(double (&in)[2][1], double (&out)[1][2]);
void transpose2x2(double (&in)[2][2], double (&out)[2][2]);
void transpose2x3(double (&in)[2][3], double (&out)[3][2]);
void transpose3x2(double (&in)[3][2], double (&out)[2][3]);
void transpose3x3(double (&in)[3][3], double (&out)[3][3]);

double **transpose(double **in, int r, int c);
int factorial(int x);
float posIntExp(float x, int y);
float sinEst(float x);
void inv2x2(double (&in)[2][2], double (&out)[2][2]);
void inv3x3(double (&in)[3][3], double (&out)[3][3]);


#endif // MATH_LIBRARY_H
