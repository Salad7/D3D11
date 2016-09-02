#pragma once

#include <Windows.h>
#include <d2d1.h>
class Graphics
{
	//COM interfaces
	// Not memory managed
	ID2D1Factory* factory;
	ID2D1HwndRenderTarget* renderTarget;
public:
	Graphics();
	~Graphics();

	bool Init(HWND windowHandle); // Has D2D Started or not
	//The Drawing starts here, u can draw circles and squares etc.
	void BeginDraw() {
		renderTarget->BeginDraw();
	}
	void EndDraw() {
		//Ends the drawing
		renderTarget->EndDraw();
	}

};

