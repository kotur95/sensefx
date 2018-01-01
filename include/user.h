#ifndef SENSEFX_USER_H
#define SENSEFX_USER_H

#include "object.h"
#include "camera.h"

class head : public object {
	private:
		float headRotated=0.0f;
	public:
		head();
		camera firstPerson;
		void processKeyboardInput(bool pressedKeys[256], int x, int y);
		void processMouseMove(glm::vec2 delta);

		void drawObject();
};


class user : public object {

	public:
		head userHead;

		user(object * parent);
		user();

		void drawObject();
		void processKeyboardInput(bool pressedKeys[256], int x, int y);
		void processMouseMove(glm::vec2 delta);
		camera * fpsViewCamera();
};

#endif
