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
	Actor*	temp_actors;
	actor_count_ = 0; 
	if(type == World::Menu) {
		temp_actors = new Actor[1];
		temp_actors[0].setInputComponent(new ButtonInput());
		temp_actors[0].setGraphicsComponent(new ButtonGraphics());
		temp_actors[0].position = sf::Vector2f(400, 300);
		temp_actors[0].size		= sf::Vector2f(200, 60);
		actor_count_=1;
		delete [] actors_;
		actors_ = temp_actors;
	} else if(type == World::Game) {
	}
	return true;
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
