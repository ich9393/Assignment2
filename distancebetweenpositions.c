#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Position{
    
    float x, y;
    
}Position;

double distance(Position p1, Position p2){
    return sqrt(pow(p1.x-p2.x, 2)+pow(p1.y-p2.y, 2));
    
}

Position* closest_positions(Position* positions, int array_size, Position query, float maximum_distance){


}

int main(void){

    Position p1, p2;

    p1.x=0;
    p1.y=0;
    p2.x=4;
    p2.y=4;

    printf("distance between two points is %lf\n", distance(p1, p2));
}