#ifndef TEXTURE_HOLDER_HPP
#define TEXTURE_HOLDER_HPP

#include<map>
#include<SFML/Graphics/Texture.hpp>

namespace Texture {

	enum Id {PlayButton, ExitButton};

	class TextureHolder {
	public:
		sf::Texture&			getTexture(Texture::Id texture);
		bool					load(Texture::Id texture, const char* filename);
	private:
		std::map<Texture::Id, sf::Texture>		textures;
	};
};
#endif

