#include"../include/Components/ButtonGraphics.hpp"

#include<iostream>

const unsigned int CLICKED 	= 0;
const unsigned int MOVED	= 1;


ButtonGraphics::ButtonGraphics()
{
	body_.setSize(sf::Vector2f(200, 60));
	body_.setOrigin(sf::Vector2f(100, 30));
	body_.setPosition(sf::Vector2f(400, 300));
	body_.setFillColor(sf::Color::Blue);
}

void ButtonGraphics::update(Actor& actor) 
{
	body_.setFillColor(sf::Color::Blue);
	unsigned int 	message;
	while(pollMessage(message))
	{
		if(message == CLICKED) {
			body_.setFillColor(sf::Color::White);
		}
	}
}

void ButtonGraphics::render(sf::RenderWindow& window) const 
{
	window.draw(body_);
}
