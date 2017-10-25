#include <stdio.h>
void getsurface();

struct rectangular_cuboid {
    double a;
    double b;
    double c;
};

float surface(struct rectangular_cuboid sample){


return sample.a*sample.b*2+sample.a*sample.c*2+sample.c*sample.b*2;
}

float volume(struct rectangular_cuboid sample){

return sample.a*sample.b*sample.c;
}

// TODO:
// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface

// TODO:
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

int main()
{

struct rectangular_cuboid sample = {100, 100, 100};

printf("the surface is  %.0f\n", surface(sample));
printf("the volume is  %.0f\n", volume(sample));


    return 0;
}
