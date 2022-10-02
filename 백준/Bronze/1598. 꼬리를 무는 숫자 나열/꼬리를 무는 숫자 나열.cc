#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int i,j,k;
    int n,m;
    int x1,x2,y1,y2;
    scanf("%d",&m);
    x1 = ((m-1)/4)  ;
    y1 = m%4;
    if ( y1 == 0 )
        y1 += 3;
    else
        y1 -= 1;

    scanf("%d", &n);
    x2 = ((n-1) /4) ;
    y2 = n%4;

    if ( y2 == 0 )
        y2 += 3;
    else
        y2 -= 1;


    x1 -= x2;
    y1 -= y2;
    if ( x1 < 0 )
        x1 *= -1;
    if ( y1 < 0 )
        y1 *= -1;


    printf("%d", x1 + y1);


    return 0;
}