/**
 * @file balloon_operation.h
 * @author Tumaskar 
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

# include "graphics.h"
# include "conio.h"
# include "stdio.h"
# include "stdlib.h"
# include "dos.h"
#define ARROW_SIZE 7
#define BALLOON_SIZE 3

int flag_arrow=0,flag_balloon=1,count_arrow=6,count_balloon=10;
void *balloon,*bow,*arrow,*burst;
void *clear_balloon,*clear_burst;
void draw_balloon(int ,int );
void draw_burst ( int x, int y );
void draw_bow(int x,int y);
void draw_arrow(int x, int y);
void shoot(int *x, int *y);
int testkeys();
void fly(int *x, int *y);
void start();




