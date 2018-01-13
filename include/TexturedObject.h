#ifndef SENSEFX_TEXTURED_OBJECT_H
#define SENSEFX_TEXTURED_OBJECT_H

#include "DrawableObject.h"
#include "TransformableObject.h"
#include "Texture.h"
#include "Model.h"
#include "Material.h"

class TexturedObject : public DrawableObject , public TransformableObject {

	public:
		Model model = Model("resources/models/cube_medium.obj");
		Material material = Material("resources/materials/normal.mat");
		Texture2D texture = Texture2D("resources/textures/default.bmp");

		TexturedObject(Object * parent, glm::vec4 color, Model model, Material material, Texture2D texture);
		TexturedObject();

		void drawObject();
		virtual void drawTexturedObject();
};

#endif //TEXTURED_OBJECT
