#ifndef INPUT_COMPONENT_HPP
#define INPUT_COMPONENT_HPP

class Actor;
class World;
class GraphicsComponent;

class InputComponent {
public:
	virtual void				update(World& world, GraphicsComponent& graphics, Actor& actor) {}
};

#endif
