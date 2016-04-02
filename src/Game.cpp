#include "Game.h"


void Game::setScene(Scene *newScene){
	currentScene = newScene;
}

void Game::loop(){
	while(!quitGame){
		graphics.updateSize();
		currentScene->update();
	}
}

void Game::quit(){
	quitGame = true;
}