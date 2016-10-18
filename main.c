#include<stdio.h>
#include"odcinki.c"

int main(){
<<<<<<< HEAD
    int n,cas=13;
    Point p1,p2,p3,p4;
    Segm s1,s2,s3,s4,d1,d2;

    scanf("%d", &n);
    while(  n-- ){
        scanf("%d%d%d%d%d%d%d%d", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y, &p4.x, &p4.y);

        if(side(p1,p3,p2)*side(p1,p3,p4)==1) swap(&p2,&p3);             /* swap if p2,p4 on the same side of p1p3 */
        if(side(p1,p3,p2)*side(p1,p3,p4)==1) swap(&p3,&p4);             /* swap if p2,p4 on the same side of p1p3 */

        s1.b=p1;    s1.e=p2;                                            /* sides and diagonals */
        s2.b=p2;    s2.e=p3;
        s3.b=p3;    s3.e=p4;
        s4.b=p4;    s4.e=p1;
        d1.b=p1;    d1.e=p3;
        d2.b=p2;    d2.e=p4;

        printf("Case %d: ", cas++);
        if( length(s1)==length(s2) &&  orthogonal(s1,s2) && orthogonal(s2,s3) && orthogonal(s3,s4) ) puts("Square");
        else if( orthogonal(s1,s2) && orthogonal(s2,s3) && orthogonal(s3,s4)) puts("Rectangle");
        else if( orthogonal(d1,d2) && length(s1)==length(s3) && length(s1)==length(s2) ) puts("Rhombus");
        else if( parallel(s1,s3) && parallel(s2,s4) ) puts("Parallelogram");
        else if( parallel(s1,s3) || parallel(s2,s4) ) puts("Trapezium");
        else puts("Ordinary Quadrilateral");
    }
    return 0;
}
