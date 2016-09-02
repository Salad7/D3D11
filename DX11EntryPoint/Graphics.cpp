#include "Graphics.h"



Graphics::Graphics()
{
	factory = NULL;
	renderTarget = NULL;
}


Graphics::~Graphics()
{
	if (factory) factory->Release();
	if (renderTarget) renderTarget->Release();
}


bool Graphics::Init(HWND windowHandle)
{
	//Want to create factory first
	HRESULT  res = D2D1CreateFactory(D2D1_FACTORY_TYPE::D2D1_FACTORY_TYPE_SINGLE_THREADED, &factory);
}