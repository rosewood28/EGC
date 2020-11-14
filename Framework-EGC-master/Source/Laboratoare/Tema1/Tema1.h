#pragma once

#include <Component/SimpleScene.h>
#include <string>
#include <Core/Engine.h>
#include "Arrow.h"

class Tema1 : public SimpleScene
{
	public:
		Tema1();
		~Tema1();

	void Init() override;
	int spaceBow = 100;
	int scale = 75;
	GLfloat degre,arrowSpeed = 0 ,translationx = 25,translationy = 250, translationyArrow = 250, arrowX = 100,squer_l = 100;
	int verify = 0;
	void ArrowRelese(GLfloat relese);

private:
	void FrameStart() override;
	void Update(float deltaTimeSeconds) override;
	void FrameEnd() override;

	void RanderElements();

	void OnInputUpdate(float deltaTime, int mods) override;
	void OnKeyPress(int key, int mods) override;
	void OnKeyRelease(int key, int mods) override;
	void OnMouseMove(int mouseX, int mouseY, int deltaX, int deltaY) override;
	void OnMouseBtnPress(int mouseX, int mouseY, int button, int mods) override;
	void OnMouseBtnRelease(int mouseX, int mouseY, int button, int mods) override;
	void OnMouseScroll(int mouseX, int mouseY, int offsetX, int offsetY) override;
	void OnWindowResize(int width, int height) override;
protected:
	Arrow* arrow;
	
	glm::mat3 modelMatrix;
	float translateX, translateY;
	float scaleX, scaleY;
	float angularStep;
	GLenum polygonMode;

};