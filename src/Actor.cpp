#include"../include/Actor.hpp"

Actor::Actor() {}

Actor::Actor(InputComponent* input, GraphicsComponent* graphics) :
	input_(input),
	graphics_(graphics)
{}

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
