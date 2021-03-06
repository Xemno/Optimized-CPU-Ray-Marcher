#ifndef TORUS_H_
#define TORUS_H_

#include "vec3.h"

/*
Params are:  
- params[0]: r1
- params[1]: r2
-> 2 parameter in total
 */
double sdf_torus(Vec3 p, double params[]);
extern const int nr_torus_params;

#endif //TORUS_H_