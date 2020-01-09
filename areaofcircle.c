
#include <stdio.h>
#include <math.h>

float CircleAreaFunction(float r)
{
        return r * r * M_PI;
}

int main()
{

float area;
float i;

for (i = 3.5; i <= 12.5; i++) 
{
        area = CircleAreaFunction(i);
        printf("Radius : %f , Area : %f\n", i, area);
}
}







