#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t *color)
{
    return color[1] + 10*color[0];
}
