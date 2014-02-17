#ifndef TEXTURE_HOLDER_HPP
#define TEXTURE_HOLDER_HPP

#include<map>
#include<SFML/Graphics/Texture.hpp>



class TextureHolder {
public:
	enum Id {PlayButton, ExitButton};
	sf::Texture&			getTexture(TextureHolder::Id texture);
	bool					load(TextureHolder::Id texture, const char* filename);
private:	
	std::map<TextureHolder::Id, sf::Texture>		textures;
};
#endif

