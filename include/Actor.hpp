#ifndef ACTOR_HPP
#define ACTOR_HPP

#include"InputComponent.hpp"
#include"GraphicsComponent.hpp"
#include<SFML/System/Vector2.hpp>
#include<SFML/Graphics/RenderWindow.hpp>

class Actor {
public:
	sf::Vector2f			position;
	sf::Vector2f			size;
							Actor();
							Actor(InputComponent* input, GraphicsComponent* graphics);
							~Actor();
	void					setInputComponent(InputComponent* input);
	void					setGraphicsComponent(GraphicsComponent* graphics);

	void					update(World& world);
	void					render(sf::RenderWindow& window);

	void 					operator=(Actor& right);
private:
	InputComponent*			input_;
	GraphicsComponent*		graphics_;
};

#endif
