#ifndef GAME_HPP
#define GAME_HPP

#include"World.hpp"
#include<SFML/Graphics/RenderWindow.hpp>

class Game {
public:
							Game();
							~Game();
	void					main();
private:
	sf::RenderWindow*		window_;
	World					world;
};

#endif
