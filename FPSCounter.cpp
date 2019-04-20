#include "FPSCounter.h"


//Constructors/Destructors
FPSCounter::FPSCounter() {
	gameFont.loadFromFile("res/fonts/arial.ttf");
	framerateCounter.setFont(gameFont);
	ssFPS << "FPS: " << framerate;
	framerateCounter.setString(ssFPS.str());
}

FPSCounter::~FPSCounter() {
	//
}



//Functions
void FPSCounter::drawTo(sf::RenderWindow& window) {
	window.draw(framerateCounter);
}