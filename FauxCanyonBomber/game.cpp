#include "game.h"
#include "graphics.h"
#include "config.h"
#include "player.h"

void Game::update()
{
	if (!player_init)
	{
		player = new Player();
		player_init = true;
	}
	
}

void Game::draw()
{
	graphics::Brush br;
	br.texture = std::string(ASSET_PATH) + "grandcanyon.png";
	br.outline_opacity = 0.0f;
	//br.gradient = true;
	//br.fill_secondary_opacity = 0.0f;

	//float offset = CANVAS_WIDTH * sinf(graphics::getGlobalTime()/2000) / 4;

	//draw background
	graphics::drawRect(CANVAS_WIDTH / 2, CANVAS_HEIGHT / 2, CANVAS_WIDTH, CANVAS_HEIGHT, br);

	//draw player
	if (player)
		player->draw();
}

void Game::init()
{
}

Game::Game()
{
}

Game::~Game()
{
	if (player) {
		delete player;
	}
}
