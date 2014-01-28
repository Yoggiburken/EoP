#ifndef BUTTON_GRAPHICS
#define BUTTON_GRAPHICS

#include"../GraphicsComponent.hpp"
#include<SFML/Graphics/RectangleShape.hpp>

class ButtonGraphics : public GraphicsComponent {
public:
								ButtonGraphics();
	virtual void				update(Actor& actor);
	virtual void				render(sf::RenderWindow& window) const;
private:
	sf::RectangleShape			body_;
};

#endif
