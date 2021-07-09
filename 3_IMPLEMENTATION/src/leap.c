/**
 * @file leap.c
 * @author sairaj (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "head.h"
int leapyear(int x){
    if(x%4==0){
        if(x%100==0){
            if(x%400==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}
