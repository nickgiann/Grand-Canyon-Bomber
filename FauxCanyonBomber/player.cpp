#pragma once

#include "player.h"
#include "graphics.h"

void Player::update()
{
}

void Player::draw()
{
	graphics::Brush br;
	br.outline_opacity = 0.0f;

	br.texture = std::string(ASSET_PATH) + "plane.png";
	graphics::drawRect(pos_x, pos_y, 90, 90, br);

	/*br.texture = "";
	br.gradient = true;
	br.fill_opacity = 1.0f;
	br.fill_secondary_opacity = 0.4f;
	br.fill_color[0] = 0.5f;
	br.fill_color[1] = 0.0f;
	br.fill_color[2] = 0.5f;
	
	br.fill_secondary_color[0] = 1.0f;
	br.fill_secondary_color[1] = 0.0f;
	br.fill_secondary_color[2] = 1.0f;
	graphics::drawDisk(pos_x + 80, pos_y, 10, br);*/
}

void Player::init()
{
}

Player::Player()
{
}

Player::~Player()
{
}
