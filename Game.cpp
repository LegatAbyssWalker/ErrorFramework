#include "Game.h"

//Constructors/Destructors
Game::Game() {
	window.create(sf::VideoMode(screenWidth, screenHeight), "SFML Framework");
	player.setPlayerPos({ screenWidth / 2, screenHeight / 2 });
}

Game::~Game() {
	window.clear();
	window.close();
}


//Functions
void Game::handlePlayerInput(sf::Keyboard::Key key, bool isPressed) {
	//Player movement
	if (key == sf::Keyboard::W) { isMovingUp = isPressed; }
	if (key == sf::Keyboard::A) { isMovingLeft = isPressed; }
	if (key == sf::Keyboard::S) { isMovingDown = isPressed; }
	if (key == sf::Keyboard::D) { isMovingRight = isPressed; }

}

void Game::updateEvents() {
	while (window.pollEvent(sfEvent)) {
		switch (sfEvent.type) {
		case sf::Event::KeyPressed:
			handlePlayerInput(sfEvent.key.code, true);
			break;

		case sf::Event::KeyReleased:
			handlePlayerInput(sfEvent.key.code, false);
			break;

		case sf::Event::Closed:
			window.close();
			break;
		}
	}
}

void Game::update() {
	sf::Vector2f movement(0.f, 0.f);
	if (isMovingUp) { movement.y -= playerSpeed; }
	if (isMovingLeft) { movement.x -= playerSpeed; }
	if (isMovingDown) { movement.y += playerSpeed; }
	if (isMovingRight) { movement.x += playerSpeed; }

	player.moveTo(movement);
}

void Game::render() {
	window.clear();

	//Render items
	player.drawTo(window);
	fpscounter.drawTo(window);


	window.display();
}

void Game::run() {
	while (window.isOpen()) {
		updateEvents();
		update();
		render();
	}
}