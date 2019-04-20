#ifndef FPSCOUNTER_H
#define FPSCOUNTER_H

#include "SFML/Graphics.hpp"
#include <sstream>
#include <fstream>

class FPSCounter {
private:
	sf::Font gameFont;
	sf::Text framerateCounter;

	sf::Clock dtClock;
	sf::Time time = dtClock.getElapsedTime();
	float framerate = time.asSeconds();

public:
	//Constructors/Destructors
	FPSCounter();
	~FPSCounter();

	//Functions
	void drawTo(sf::RenderWindow& window);
};

#endif