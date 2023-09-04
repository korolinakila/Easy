#include "easy.h"
#include <iostream>
using namespace std;
int itc_sqrt(int num){
    int a=0;
    while (num!= a*a && a<=num){
        a+=1;
    }
    if (a*a==num){
            return a;
    }
    else{
        return (-1);
    }
}
