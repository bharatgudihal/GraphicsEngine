#pragma once
#include <Externals/glm/Includes.h>

namespace Engine {
	namespace Graphics {
		struct Material {
			glm::vec3 ambient;
			glm::vec3 diffuse;
			glm::vec3 specular;
			float shininess;
		};
	}
}