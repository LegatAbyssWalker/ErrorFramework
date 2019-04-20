#ifndef PLAYER_H
#define PLAYER_H

#include "SFML/Graphics.hpp"
#include "SFML/System/Vector2.hpp"

class Player {
	private:
		sf::Texture texture;
		sf::Sprite player;

	public:
		//Constructors/Destructors
		Player();
		~Player();


		//Functions
		void drawTo(sf::RenderWindow& window);
		void moveTo(sf::Vector2f distance);
		void setPlayerPos(sf::Vector2f newPos);
};

#endif