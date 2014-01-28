#include"../include/World.hpp"

bool World::load()
{
	return true;
}

void World::update()
{
	for(unsigned int i=0; i<actor_count_; i++) {
		actors_->update(*this);
	}
}

void World::render(sf::RenderWindow& window)
{
	for(unsigned int i=0; i<actor_count_; i++) {
		actors_->render(window);
	}
}
