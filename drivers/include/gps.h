#ifndef __GPS_H__
#define __GPS_H__

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "TM4C123.h"
#include "uart.h"
#include "time.h"

#define PI 3.14159265358979323846

typedef struct
{
    double lat;
    double lon;
    time_pt time;
} geographic_point_t;

void gps_init();

double distance_sphere(geographic_point_t *, geographic_point_t *);

double distance_spheroid(geographic_point_t *, geographic_point_t *);

geographic_point_t parser(char *);

geographic_point_t get_geographic_point();

float parse_degree(char *);

char *get_sentence();

#endif
