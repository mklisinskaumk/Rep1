typedef struct point{
    int x,y;
}Point;

void swap(Point *p1, Point *p2){
    Point a;
    a=*p1;*p1=*p2;*p2=a;
}
int side(Point a, Point b, Point c){
    int t=(b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x);              /* dot product of vector ac and vector normal to ab */
    if(t<0)return -1;
    if(t>0)return 1;
    return 0;
}
