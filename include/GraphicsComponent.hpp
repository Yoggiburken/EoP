#ifndef GRAPHICS_COMPONENT_HPP
#define GRAPHICS_COMPONENT_HPP

class Actor;

class GraphicsComponent {
public:
	virtual void	update(Actor& actor) {}
	virtual void	render(Actor& actor) {}
}

#endif
