#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    float score=0.0;
    float m[5],w[5],h[2];
    scanf("%f %f %f %f %f",&m[0],&m[1],&m[2],&m[3],&m[4]);
    scanf("%f %f %f %f %f",&w[0],&w[1],&w[2],&w[3],&w[4]);
    scanf("%f %f",&h[0],&h[1]);
    float check=2250.0;
    //score=(1-m[0]/250)*500+(1-m[1]/250)*1000+(1-m[2]/250)*1500+(1-m[3]/250)*2000+(1-m[4]/250)*2500;
    //score=score-50*(w[0]+w[1]+w[2]+w[3]+w[4]);
    if(0.3*500<(1-m[0]/250)*500-50*w[0])
        score=score+(1-m[0]/250)*500-50*w[0];
    else
        score=score+(0.3)*500;
    
    if(0.3*1000<(1-m[1]/250)*1000-50*w[1])
        score=score+(1-m[1]/250)*1000-50*w[1];
    else
        score=score+(0.3)*1000;
    
    if(0.3*1500<(1-m[2]/250)*1500-50*w[2])
        score=score+(1-m[2]/250)*1500-50*w[2];
    else
        score=score+(0.3)*1500;
    
    if(0.3*2000<(1-m[3]/250)*2000-50*w[3])
        score=score+(1-m[3]/250)*2000-50*w[3];
    else
        score=score+(0.3)*2000;
    
    if(0.3*2500<(1-m[4]/250)*2500-50*w[4])
        score=score+(1-m[4]/250)*2500-50*w[4];
    else
        score=score+(0.3)*2500;
    
    if(score<check)
        score=check;
    score=score+100*h[0]-50*h[1];
    int final=score;
    printf("%d\n",final);
    return 0;
}
