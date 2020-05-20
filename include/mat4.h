#ifndef MAT_4_H_
#define MAT_4_H_

#include "vec3.h"

typedef struct
{
    double m[4][4];
} Mat4;

//Creates identity matrix
// Mat4 create_mat4_id();

// Mat4 create_mat4(double m00, double m01, double m02, double m03,
//                  double m10, double m11, double m12, double m13,
//                  double m20, double m21, double m22, double m23,
//                  double m30, double m31, double m32, double m33);

// Mat4 transpose(Mat4 *mat);

// Mat4 mult_mat(Mat4 *m1, Mat4 *m2);

void mult_vec_matrix_no_homo(Mat4 *m, float v[NR_VEC_ELEMENTS], float res[NR_VEC_ELEMENTS]);

// Vec3 mult_vec_matrix(Mat4 *m, Vec3 v);

Mat4 look_at(float pos[NR_VEC_ELEMENTS], float dir[NR_VEC_ELEMENTS], float up[NR_VEC_ELEMENTS]);

#endif