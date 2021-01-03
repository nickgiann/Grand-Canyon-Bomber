#pragma once

#include "player.h"


class Game
{
	Player* player;
	bool player_init = false;
public:
	void update();
	void draw();
	void init();
	Game();
	~Game();
};