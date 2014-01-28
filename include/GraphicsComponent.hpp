#ifndef GRAPHICS_COMPONENT_HPP
#define GRAPHICS_COMPONENT_HPP

#include<SFML/Graphics/RenderWindow.hpp>

class Actor;

class GraphicsComponent {
public:
					GraphicsComponent();
	void			receive(unsigned int message);
	bool			pollMessage(unsigned int& message);
	virtual void	update(Actor& actor) {}
	virtual void	render(sf::RenderWindow& window) const {}
private:
	void			resetMessages();
	unsigned int* 	messages_;
	unsigned int	message_count_;
	bool			message_received_;
};

#endif
