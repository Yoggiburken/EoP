#include"../include/Game.hpp"

const sf::VideoMode				VIDEOMODE(800, 600);
const sf::String				TITLE("Empire of Pizza");
const sf::Uint32				STYLE(sf::Style::Default);
const sf::ContextSettings		CONTEXTSETTINGS(0, 0, 8, 2, 0);

const sf::Time					UPDATE_FREQUENCY(sf::milliseconds(16));

Game::Game()
{
	window_ = new sf::RenderWindow(VIDEOMODE, TITLE, STYLE, CONTEXTSETTINGS);
}

Game::~Game()
{
	delete window_;
}

void Game::main()
{
	while(window_->isOpen())
	{
		checkEvents();
		elapsed_time_ += clock_.restart();
		while(elapsed_time_ > UPDATE_FREQUENCY)
		{
			update();
			elapsed_time_ -= UPDATE_FREQUENCY;
		}
		render();
	}
}

void Game::checkEvents()
{
	while(window_->pollEvent(event_))
	{
		if(event_.type == sf::Event::Closed) {
			window_->close();
		} else if(event_.type == sf::Event::KeyPressed) {
			if(event_.key.code == sf::Keyboard::Escape) {
				window_->close();
			}
		}
	}
}

void Game::update()
{
	world_.update();
}

void Game::render()
{
	window_->clear();
	world_.render(*window_);
	window_->display();
}
