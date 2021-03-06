#pragma once

#include <GL/glew.h>

#include <GL/freeglut.h>

#include <GL/gl.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtc/type_ptr.hpp>
using namespace glm;

class NoiseGen
{
public:
	NoiseGen();
	void GetGloudShape(GLuint& cloud_shape);
	void GetGloudDetail(GLuint& cloud_detail);
private:
	float GetPerlinValue(vec3 texPos, int freq);
	float GetWorleyVaule(vec3 texPos, int freq);
	void GenWorleyGrid();
};

