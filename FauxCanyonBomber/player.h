#pragma once

#include "gameobject.h"
#include "config.h"

class Player : public GameObject
{
	float pos_x = CANVAS_WIDTH / 2, pos_y = CANVAS_HEIGHT / 2;
public:
	void update();
	void draw();
	void init();
	Player();
	~Player();
};