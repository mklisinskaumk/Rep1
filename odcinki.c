#include"punkty.c"

typedef struct segm{
    Point b,e;
}Segm;

int parallel(Segm s1, Segm s2){                                                             /* det [v1.x  v1.y]  */
    int t = (s1.e.x-s1.b.x)*(s2.e.y-s2.b.y)-(s1.e.y-s1.b.y)*(s2.e.x-s2.b.x);                /*     [v2.x  v2.y]  */
    if( t == 0 )return 1;
    return 0;
}
int orthogonal(Segm s1, Segm s2){                                                           /* dot product of v1,v2 */
    int t = (s1.e.x-s1.b.x)*(s2.e.x-s2.b.x)+(s1.e.y-s1.b.y)*(s2.e.y-s2.b.y);
    if( t == 0 )return 1;
    return 0;
}
int crossing(Segm s1, Segm s2){
    if( side(s1.b, s1.e, s2.b)*side(s1.b, s1.e, s2.e)>0 )return 0;
    if( side(s2.b, s2.e, s1.b)*side(s2.b, s2.e, s1.e)>0 )return 0;
    return 1;                                                    /* both segments lie on both sides of one another */
}
int length(Segm s){
    return ( (s.b.x-s.e.x)*(s.b.x-s.e.x) + (s.b.y-s.e.y)*(s.b.y-s.e.y) );
}
