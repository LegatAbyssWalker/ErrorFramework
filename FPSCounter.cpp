#include "FPSCounter.h"


//Constructors/Destructors
FPSCounter::FPSCounter() {
	gameFont.loadFromFile("res/fonts/arial.ttf");
	framerateCounter.setFont(gameFont);
}

FPSCounter::~FPSCounter() {
	//
}



//Functions
void FPSCounter::drawTo(sf::RenderWindow& window) {
	window.draw(framerateCounter);
}

void FPSCounter::update() {
	time = dtClock.getElapsedTime();
	//std::cout << 1.0f / time.asSeconds() << '\n';
	ssFPS.str("");
	ssFPS << "FPS: " << 1.0f / time.asSeconds();
	framerateCounter.setString(ssFPS.str());
	dtClock.restart().asSeconds();
}
