#include"../include/Actor.hpp"

Actor::Actor() {}

Actor::Actor(InputComponent* input, GraphicsComponent* graphics) :
	input_(input),
	graphics_(graphics)
{
	size = sf::Vector2f(200, 60);
	position = sf::Vector2f(400, 300);
}

Actor::~Actor()
{
	delete input_;
	delete graphics_;
}

void Actor::update(World& world)
{
	input_->update(world, *graphics_, *this);
	graphics_->update(*this);
}

void Actor::render(sf::RenderWindow& window)
{
	graphics_->render(window);
}

void Actor::operator=(Actor& right)
{
	position	= right.position;
	size		= right.size;
	input_ 		= right.input_;
	graphics_	= right.graphics_;
}
