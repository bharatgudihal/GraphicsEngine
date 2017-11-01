#pragma once

#include <string>

namespace Engine {
	class Shader {
	public:

		unsigned int ID;

		Shader(const char* vertexShaderPath, const char* fragmentShaderPath);
		~Shader();

		void Use();

		void SetBool(const std::string& name, bool value) const;
		void SetInt(const std::string& name, int value) const;
		void SetFloat(const std::string& name, float value) const;

	};
}