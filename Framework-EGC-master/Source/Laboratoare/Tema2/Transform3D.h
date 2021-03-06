#pragma once

#include <include/glm.h>

namespace Transform3D
{
	// Translate matrix
	inline glm::mat4 Translate(float translateX, float translateY, float translateZ)
	{
		//  implement translate matrix
		return glm::mat4(1, 0, 0, 0,
						 0, 1, 0, 0,
						 0, 0, 1, 0,
						 translateX, translateY, translateZ, 1);
	}

	// Scale matrix
	inline glm::mat4 Scale(float scaleX, float scaleY, float scaleZ)
	{
		//  implement scale matrix
		return glm::mat4(scaleX, 0, 0, 0,
						 0, scaleY, 0, 0,
						 0, 0, scaleZ, 0,
						 0, 0, 0, 1);
	}

	// Rotate matrix relative to the OZ axis
	inline glm::mat4 RotateOZ(float radians)
	{
		//  implement rotate matrix
		return glm::mat4(cos(radians), sin(radians), 0, 0,
						 -sin(radians), cos(radians), 0, 0,
						 0, 0, 1, 0,
						 0, 0, 0, 1);
	}

	// Rotate matrix relative to the OY axis
	inline glm::mat4 RotateOY(float radians)
	{
		//  implement rotate matrix
		return glm::mat4(cos(radians), 0, -sin(radians), 0,
						 0, 1, 0, 0,
						 sin(radians), 0, cos(radians), 0,
						 0, 0, 0, 1);
	}

	// Rotate matrix relative to the OX axis
	inline glm::mat4 RotateOX(float radians)
	{
		//  implement rotate matrix
		return glm::mat4(1, 0, 0, 0,
						 0, cos(radians), sin(radians), 0,
						 0, -sin(radians), cos(radians), 0,
						 0, 0, 0, 1);
	}
} // namespace Transform3D
