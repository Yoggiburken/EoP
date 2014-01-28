#ifndef WORLD_HPP
#define WORLD_HPP

#include"Actor.hpp"
#include<SFML/Graphics/RenderWindow.hpp>

class World {
public:
	void					update();
	void					render(sf::RenderWindow& window);
	
	bool					load();
private:
	Actor*					actors_;
	unsigned int			actor_count_;
};

#endif
