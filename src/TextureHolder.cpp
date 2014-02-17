#include"../include/TextureHolder.hpp"
#include<fstream>

sf::Texture& Texture::TextureHolder::getTexture(Texture::Id texture_id)
{
	return textures[texture_id];
}

bool Texture::TextureHolder::load(Texture::Id texture_id, const char* filename)
{
	sf::Texture text;
	if(text.loadFromFile(filename)) {
		return false;
	}
	textures[texture_id] = text;
	return true;
}
