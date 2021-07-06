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
