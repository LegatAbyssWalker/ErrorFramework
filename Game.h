#ifndef GAME_H
#define GAME_H

#include "SFML\Graphics.hpp"
#include "SFML\Audio.hpp"
#include "SFML\Window.hpp"
#include "SFML\Network.hpp"
#include "SFML\System.hpp"

#include "Player.h"
#include "FPSCounter.h"

#include <iostream>

class Game {
private:
	sf::RenderWindow window;
	sf::Event sfEvent;
	sf::Clock dtClock;


	bool isMovingUp = false;
	bool isMovingLeft = false;
	bool isMovingDown = false;
	bool isMovingRight = false;

	const float playerSpeed = 0.1;

public:
	const unsigned int screenWidth = 1000;
	const unsigned int screenHeight = 900;

public:
	Player player;
	FPSCounter fpscounter;


public:
	//Constructors/Destructors
	Game();
	~Game();


	//Functions
	void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
	void updateEvents();
	void update();
	void render();
	void run();
};

#endif