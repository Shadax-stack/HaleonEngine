#ifndef HALEON_GRAPHICS_BACKEND_DIRECT3D11_GRAPHICS_WINDOW_H
#define HALEON_GRAPHICS_BACKEND_DIRECT3D11_GRAPHICS_WINDOW_H

#include "../DxCore/DxCoreBaseWindow.h"

namespace Haleon {

	// Could use a typedef but this is better for the future when I may need to add specific things to this class
	class GraphicsWindow : public DxCoreBaseWindow {
	protected:
		friend class CoreRenderer;
	};

}

#endif