#ifndef WORLD_HPP
#define WORLD_HPP

#include<SFML/Graphics/RenderWindow.hpp>

class World {
public:
	void					update();
	void					render(sf::RenderWindow& window);
	
	bool					load();
private:
};

#endif
