/*
 * myHeader.h
 *
 *  Created on: May 4, 2016
 *      Author: ehsan
 */
#ifndef MYHEADER_H
#define MYHEADER_H

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define  dim 3 // matrix dimension
#define SQRN(m, x) pow(x, 1.0/m)
#define MAX 9
double Xn,  Yn,  Zn;
//int MAX = 9;

//
typedef struct{ double l, u, v, u_str, v_str; }struct_Luv;
typedef struct{ double a[3]; }struct_Stars;


/*
 *
 */
void   do_CIE();
void   calc_CIE(double a, double b, double c);
void   calc_delta_e(double *param, double *param2);
void   print_header();
double do_sqr3(double a);
double *get_param();
struct_Stars calc_CIE_Lab(double *param);
struct_Stars calc_CIE_Luv(double *param);
struct_Luv   calc_uv(double a, double b, double c);




#endif /* MYHEADER_H */
