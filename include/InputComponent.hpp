#ifndef INPUT_COMPONENT_HPP
#define INPUT_COMPONENT_HPP

class Actor;

class InputComponent {
public:
	virtual void				update(Actor& actor) {}
};

#endif
