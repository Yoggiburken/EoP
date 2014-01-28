#ifndef BUTTON_INPUT_HPP
#define BUTTON_INPUT_HPP

#include"../InputComponent.hpp"

class ButtonInput : public InputComponent {
public:
	virtual void 			update(World& world, GraphicsComponent& graphics, Actor& actor);
};

#endif
