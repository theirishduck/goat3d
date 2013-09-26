#ifndef LIGHT_H_
#define LIGHT_H_

#include <vmath/vmath.h>
#include "object.h"

class Light : public Object {
public:
	Vector3 color;
	Vector3 attenuation;
	float max_dist;

	Light();
};

class DirLight : public Light {
public:
	Vector3 dir;

	DirLight();
};

class SpotLight : public DirLight {
public:
	float inner_cone, outer_cone;

	SpotLight();
};

#endif	// LIGHT_H_
