#include "FPSCounter.h"


//Constructors/Destructors
FPSCounter::FPSCounter() {
	gameFont.loadFromFile("res/fonts/arial.ttf");
	framerateCounter.setFont(gameFont);
	framerateCounter.setString("Hello world!");
}

FPSCounter::~FPSCounter() {
	//
}



//Functions
void FPSCounter::drawTo(sf::RenderWindow& window) {
	window.draw(framerateCounter);
}