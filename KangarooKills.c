//---- Calculates Expected Number of Kangaroo Roadkill Each Year
//---------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

//---- Symbolic Constants Declaration
#define AVG_WIDTH .01
#define ROADKILL_CONSTANT 1.47
//---------------------------------------------------------------

//---- Main Method
int main(void) {

//-- Local Variables Declaration
    float SideLength;
    float RoadLength;
    float RooAmount;
    float RooDensity;
    float RoadSurfaceArea;
    float ExpectedKills;

//---- Get Info From User
    printf("Enter side of square in km  : ");
    scanf("%f",&SideLength);

    printf("Enter roads length in km    : ");
    scanf("%f",&RoadLength);

    printf("Enter number of 'roos       : ");
    scanf("%f",&RooAmount);

//---- Do Calculations to Get Expected Kills
    RooDensity = (RooAmount / (SideLength * SideLength));
    
    RoadSurfaceArea = (RoadLength * AVG_WIDTH);

    ExpectedKills = (RooDensity * RoadSurfaceArea * ROADKILL_CONSTANT);

//---- Output Expected Kills
    printf("Expected number of kills is : %.1f\n", ExpectedKills);

//---- Exit program
    return(EXIT_SUCCESS);
}
