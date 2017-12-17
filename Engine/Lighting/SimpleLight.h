#pragma once

#include <Engine/Math/Transform.h>

namespace Engine {		

	class Actor;

	namespace Graphics {
		class Shader;
	}

	namespace Lighting {
		class SimpleLight {
		public:
			SimpleLight(glm::vec3 color, Actor* actor);
			~SimpleLight();
			void Apply(Graphics::Shader* shader);
			void ShowMesh(const bool showMesh);
			void Draw();					
		private:
			glm::vec3 color;
			Actor* actor;
			bool showMesh;
		};
	}
}