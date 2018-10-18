#pragma once

#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

namespace MakerCorp
{
	class InputManager
	{
	public:
		InputManager() {};
		~InputManager() {};

		bool IsSpriteClicked(Sprite object, Mouse::Button button, RenderWindow &window);

		Vector2i GetMousePostion(RenderWindow &window);
	};
}
