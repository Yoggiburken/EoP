#ifndef ACTOR_HPP
#define ACTOR_HPP

#include"InputComponent.hpp"
#include"GraphicsComponent.hpp"
#include<SFML/System/Vector2.hpp>

class Actor {
public:
	sf::Vector2f 				position;
private:
	InputComponent*				input_;
	GraphicsComponent*			graphics_;
};

#endif
