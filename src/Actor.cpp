#include"../include/Actor.hpp"

Actor::Actor() 
{
	input_ = new InputComponent;
	graphics_ = new GraphicsComponent;
}

Actor::Actor(InputComponent* input, GraphicsComponent* graphics) :
	input_(input),
	graphics_(graphics)
{}

Actor::~Actor()
{
	delete input_;
	delete graphics_;
}

void Actor::setInputComponent(InputComponent* input)
{
	delete input_;
	input_ = input;
}

void Actor::setGraphicsComponent(GraphicsComponent* graphics)
{
	delete graphics_;
	graphics_ = graphics;
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
