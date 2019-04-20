#include "Player.h"


//Constructors/Destructors
Player::Player() {
	texture.loadFromFile("res/images/Eagle.png");
	player.setTexture(texture);
}

Player::~Player() {
}


//Functions
void Player::drawTo(sf::RenderWindow& window) {
	window.draw(player);
}

void Player::moveTo(sf::Vector2f distance) {
	player.move(distance);
}

void Player::setPlayerPos(sf::Vector2f newPos) {
	player.setPosition(newPos);
}

