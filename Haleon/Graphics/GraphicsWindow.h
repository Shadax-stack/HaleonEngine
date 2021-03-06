#ifndef HALEON_GRAPHICS_GRAPHICS_WINDOW_H
#define HALEON_GRAPHICS_GRAPHICS_WINDOW_H

#if defined(HALEON_GRAPHICS_API_OPENGL3)
#include "Backend/OpenGL3/GL3GraphicsWindow.h"
#elif defined(HALEON_GRAPHICS_API_DIRECT3D9)
#include "Backend/Direct3D9/D3D9GraphicsWindow.h"
#elif defined(HALEON_GRAPHICS_API_DIRECT3D10)
#include "Backend/Direct3D10/D3D10GraphicsWindow.h"
#elif defined(HALEON_GRAPHICS_API_DIRECT3D11)
#include "Backend/Direct3D11/D3D11GraphicsWindow.h"
#elif defined(HALEON_GRAPHICS_API_DIRECT3D12)
#include "Backend/Direct3D12/D3D12GraphicsWindow.h"
#else
#include "Backend/Photon/PhotonGraphicsWindow.h"
#endif

#endif

