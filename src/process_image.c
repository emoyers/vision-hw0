#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include "image.h"

float get_pixel(image im, int x, int y, int c)
{
    // TODO Fill this in
    int size_column = im.w; 
    int size_row = im.h;
    int size_channel = im.c;

    if (x >= size_column)
    {
        x = size_column - 1;
    }
    else if (x < 0)
    {
        x = 0;
    }

    if (y >= size_row)
    {
        y = size_row - 1;
    }
    else if (y < 0)
    {
        y = 0;
    }

    if (c >= size_channel)
    {
        c = size_channel - 1;
    }
    else if (c < 0)
    {
        c = 0;
    }

    float pixel = im.data[x+y*size_column+c*size_column*size_row];
    return pixel;
}

void set_pixel(image im, int x, int y, int c, float v)
{
    // TODO Fill this in
    int size_column = im.w; 
    int size_row = im.h;
    int size_channel = im.c;
    _Bool error = 0;

    if (x >= size_column)
    {
        error = 1;
    }
    else if (x < 0)
    {
        error = 1;
    }

    if (y >= size_row)
    {
        error = 1;
    }
    else if (y < 0)
    {
        error = 1;
    }

    if (c >= size_channel)
    {
        error = 1;
    }
    else if (c < 0)
    {
        error = 1;
    }

    if (error == 0)  
    {
        im.data[x+y*size_column+c*size_column*size_row] = v;
    } 
}

image copy_image(image im)
{
    image copy = make_image(im.w, im.h, im.c);
    // TODO Fill this in
    return copy;
}

image rgb_to_grayscale(image im)
{
    assert(im.c == 3);
    image gray = make_image(im.w, im.h, 1);
    // TODO Fill this in
    return gray;
}

void shift_image(image im, int c, float v)
{
    // TODO Fill this in
}

void clamp_image(image im)
{
    // TODO Fill this in
}


// These might be handy
float three_way_max(float a, float b, float c)
{
    return (a > b) ? ( (a > c) ? a : c) : ( (b > c) ? b : c) ;
}

float three_way_min(float a, float b, float c)
{
    return (a < b) ? ( (a < c) ? a : c) : ( (b < c) ? b : c) ;
}

void rgb_to_hsv(image im)
{
    // TODO Fill this in
}

void hsv_to_rgb(image im)
{
    // TODO Fill this in
}
