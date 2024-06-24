// this program calculates the area of rectengle with the help of structure
#include<stdio.h>
struct point{
    int x;
    int y;
};
struct rectengel{
    struct point upper_left_corners;
    struct point lower_right_corners;
};
int area(struct rectengel r){
    int length,bredth;
    length = r.lower_right_corners.x - r.upper_left_corners.x;
    bredth = r.upper_left_corners.y - r.lower_right_corners.y;
    return length * bredth;
}

int main(){
    struct rectengel r;
    printf("Enter the upper left cordinates of rectengle\n");
    scanf("%d %d",&r.upper_left_corners.x,&r.upper_left_corners.y);
    printf("Enter the lower right cordinates of rectengle\n");
    scanf("%d %d",&r.lower_right_corners.x,&r.lower_right_corners.y);
    printf("Area of rectengle is: %d", area(r));
    return 0;
}