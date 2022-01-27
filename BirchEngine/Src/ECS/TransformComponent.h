#pragma once

#include "../Vector2D.h"
#include "Components.h"

struct TransformComponent : public Component
{

public:

	Vector2D position;
	Vector2D velocity;
	
	int height = 32;
	int width = 32;
	int scale = 1;
	int spd = 3;
		
	TransformComponent() 
	{
		position.Zero();
	}

	TransformComponent(int sc)
	{
		position.Zero();
		scale = sc;
	}

	TransformComponent(float x, float y)
	{
		position.Zero();
	}

	TransformComponent(float x, float y, int h, int w, int sc)
	{
		position.x = x;
		position.y = y;
		height = h;
		width = w;
		scale = sc;
	}

	void init()
	{
		velocity.Zero();
	}

	void update() override
	{
		position.x += velocity.x * spd;
		position.y += velocity.y * spd;
	}
};