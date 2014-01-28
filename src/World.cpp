#include"../include/World.hpp"
#include"../include/Components.hpp"

#include<SFML/Window/Mouse.hpp>

World::World()
{
	actors_ = new Actor[1];
}

void World::setWindowPointer(sf::Window* window)
{
	window_ = window;
}

sf::Vector2i World::getMousePosition() const
{
	return sf::Mouse::getPosition(*window_);
}

bool World::load(World::LoadType type, sf::Window* window)
{
	delete [] actors_;
	actor_count_ = 0; 
	if(type == World::Menu) {
		actors_ = new Actor[1];
		actors_[0].setInputComponent(new ButtonInput());
		actors_[0].setGraphicsComponent(new ButtonGraphics());
		actor_count_=1;
		return true;
	} else if(type == World::Game) {
	}
	return false;
}

void World::update()
{
	for(unsigned int i=0; i<actor_count_; i++) {
		actors_[i].update(*this);
	}
}

void World::render(sf::RenderWindow& window)
{
	for(unsigned int i=0; i<actor_count_; i++) {
		actors_[i].render(window);
	}
}
