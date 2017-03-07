#include <iostream>
#include <GL\glew.h>
#include "display.h"
#include "shader.h"

int main() 
{
	Display display{ 800, 600, "test" };

	Shader shader("./res/basicShader");

	while (!display.IsClosed())
	{
		display.Clear(0.1f, 0.3f, 0.4f, 1.0f);
		shader.Bind();

		display.Update();
	}

	return 0;
}