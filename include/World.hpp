#ifndef WORLD_HPP
#define WORLD_HPP

#include"Actor.hpp"
#include<SFML/Graphics/RenderWindow.hpp>

class World {
public:
							World();
	void					update();
	void					render(sf::RenderWindow& window);
	
	void					setWindowPointer(sf::Window* window);
	sf::Vector2i			getMousePosition() const;

	enum LoadType {Menu, Game};
	bool					load(World::LoadType type, sf::Window* window);
private:
	Actor						actor_;
	/*Actor*					actors_;
	unsigned int			actor_count_;*/

	sf::Window*				window_;
};

#endif
