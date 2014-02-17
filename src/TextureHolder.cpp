#include"../include/TextureHolder.hpp"
#include<fstream>

sf::Texture& TextureHolder::getTexture(TextureHolder::Id texture_id)
{
	return textures[texture_id];
}

bool TextureHolder::load(TextureHolder::Id texture_id, const char* filename)
{
	sf::Texture text;
	if(text.loadFromFile(filename)) {
		return false;
	}
	textures[texture_id] = text;
	return true;
}
