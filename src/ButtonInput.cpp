#include"../include/Components/ButtonInput.hpp"

#include"../include/Actor.hpp"
#include"../include/World.hpp"
#include<SFML/Window/Mouse.hpp>

const unsigned int 		CLICKED = 0;

void ButtonInput::update(World& world, GraphicsComponent& graphics, Actor& actor)
{
	if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
		sf::Vector2i mouse_position = world.getMousePosition();
		if(actor.position.x - actor.size.x <= mouse_position.x) {
			if(actor.position.x + actor.size.x >= mouse_position.x) {
				if(actor.position.y  - actor.size.y <= mouse_position.y) {
					if(actor.position.y + actor.size.y >= mouse_position.y) {
						graphics.receive(CLICKED);
					}
				}
			}
		}
	}
}


