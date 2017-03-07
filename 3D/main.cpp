#include <iostream>
#include <GL\glew.h>
#include "display.h"

int main() 
{
	Display display{ 800, 600, "test" };

	while (!display.IsClosed())
	{
		display.Clear(0.1f, 0.3f, 0.4f, 1.0f);

		display.Update();
	}

	return 0;
}