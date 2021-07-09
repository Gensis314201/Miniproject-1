  
/**
 * @file Calender.c
 * @author Sairaj (sairajlp99@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "head.h"

int main(){
int s;
int f,k,m,d,c;
int day,month,year,a1,a2,a3,res,yr,i,j,z,b;
while(1==1){
    printf("Enter 1 for English calendar\nEnter 2 for Kannada calendar:");
    scanf("%d",&s);
    printf("\nYear:");
    scanf("%d",&year);
    printf("\nMonth:");
    scanf("%d",&month);
    printf("\n\n\t");
    if(s==1){
        if(month==1){
            printf("\tJanuary");
        }
        else if(month==2){
            printf("\tFebruary");
        }
        else if(month==3){
            printf("\tMarch");
        }
        else if(month==4){
            printf("\tApril");
        }
        else if(month==5){
            printf("\tMay");
        }
        else if(month==6){
            printf("\tJune");
        }
        else if(month==7){
            printf("\tJuly");
        }
        else if(month==8){
            printf("\tAugust");
        }
        else if(month==9){
            printf("\tSeptember");
        }
        else if(month==10){
            printf("\tOctober");
        }
        else if(month==11){
            printf("\tNovember");
        }
        else if(month==12){
            printf("\tDecember");
        }
        printf("  %d\n\n",year);
        printf("  SUN   MON   TUE   WED   THU   FRI   SAT\n\n");
        if(month==1){
            m=11;
            d=(year%100)-1;
        }
        else if(month==2){
            m=12;
            d=(year%100)-1;
        }
        else{
            m=month-2;
            d=year%100;
        }
        c=year/100;
        a1=(13*m-1)/5;
        a2=d/4;
        a3=c/4;
        f=1+a1+d+a2+a3-2*c;
        if(f>=0){
           res=f%7;
        }
        else{
            res=(f%7)+7;
        }
        z=1;
        for(i=0;i<6;i++){
            if(i==0){
                for(j=0;j<7;j++){
                    if(j==res){
                        printf("  %3d ",z);
                        res++;
                        z++;
                    }
                    else{
                        printf("      ");
                    }
                }
                printf("\n\n");
            }
            else{
                for(b=0;b<7;b++){
                    if(1==leapyear(year)){
                        if(z==30 && m==12){
                            break;
                        }
                    }
                    else{
                        if(z==29 && m==12){
                            break;
                        }
                    }
                    if(z==31 && (m==2 || m==4 || m==7 || m==9)){
                        break;
                    }
                    if(z==32){
                        break;
                    }
                    printf("  %3d ",z);
                    z++;
                }
                printf("\n\n");
            }
        }
        }
    else{
        if(month==1){
            printf("\tPUSHYA");
        }
        else if(month==2){
            printf("\tMAAGHA");
        }
        else if(month==3){
            printf("\tCHAITRA");
        }
        else if(month==4){
            printf("\tSHRABON");
        }
        else if(month==5){
            printf("\tVAISHAKA");
        }
        else if(month==6){
            printf("\tJYESTHA");
        }
        else if(month==7){
            printf("\tAASHADA");
        }
        else if(month==8){
            printf("\tSHRAVAANA");
        }
        else if(month==9){
            printf("\tBAADRAPADHA");
        }
        else if(month==10){
            printf("\tAASHYUJA");
        }
        else if(month==11){
            printf("\tKARTHIKA");
        }
        else if(month==12){
            printf("\tMRAGASHIRA");
        }
        printf("  %d\n\n",year);
    printf("\n SHANIVAARA  RAVIVAARA SOMAVAARA MANGALAVAARA BUDHVAARA GURUVAARA SHUKRVAARA\n\n");
    yr=year+594;
    if(month==12){
        m=1;
        d=yr%100;
    }
    else{
        m=month+1;
        d=(yr%100)-1;
    }
    c=yr/100;
    if(m==1){
        a1=0;
    }
    else if(m>=2 && m<=7){
        a1=3*m-4;
    }
    else{
        a1=2*m+3;
    }
    a2=d/4;
    a3=c/4;
    f=a1+d+a2+a3+4-2*c;
    if(f%7>=0){
        res=f%7;
    }
    else{
        res=(f%7)+7;
    }
    z=1;
        for(i=0;i<6;i++){
            if(i==0){
                for(j=0;j<7;j++){
                    if(j==res){
                        printf("  %3d ",z);
                        res++;
                        z++;
                    }
                    else{
                        printf("      ");
                    }
                }
                printf("\n\n");
            }
            else{
                for(b=0;b<7;b++){
                    if(1==leapyear(yr)){
                        if(z==32 && m==12){
                            break;
                        }
                    }
                    else{
                        if(z==31 && m==12){
                            break;
                        }
                    }
                    if(z==31 && (m==1 || (m>=7&&m<=11))){
                        break;
                    }
                    if(z==32){
                        break;
                    }
                    printf("  %3d ",z);
                    z++;
                }
                printf("\n\n");
            }
        }
    }
    }
    return 0;
}
