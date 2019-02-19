/* 
 * File:   main.c
 * Author: Administrator
 *
 * Created on February 19, 2019, 9:49 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a,b;
    printf("Nhập chiều dài a : "); scanf("%d", &a);
    printf("Nhập chiều rộng b : "); scanf("%d", &b);
     
    printf("\n Chu vi hình chữ nhật có cạnh %d,%d=%d", a, b,(a+b)*2);
    printf("\n Diện tích hình chữ nhật có cạnh %d,%d=%d", a, b, a*b);
    
    return (EXIT_SUCCESS);
}

