#include "space_age.h"

float age(planet_t planet, int64_t seconds)
{
    uint64_t year = 31557600;
    if (planet == MERCURY)
        return (seconds/year) / 0.2408467f;
    else if(planet == VENUS)
        return (seconds/year) / 0.61519726f;
    else if(planet == EARTH)
        return (seconds/year) / 1;
    else if(planet == MARS)
        return (seconds/year) / 1.8808158f;
    else if(planet == JUPITER)
        return (seconds/year) / 11.862615f;
    else if(planet == SATURN)
        return (seconds/year) / 29.447498f;
    else if(planet == URANUS)
        return (seconds/year) / 84.016846f;
    else if(planet == NEPTUNE)
        return (seconds/year) / 164.79132f;
    else
        return -1;
}
