#ifndef BULLET_H
#define BULLET_H

#include "SFML/Graphics.hpp"
#include <iostream>

class Bullet {
private:
	sf::Sprite shape;

	sf::Vector2f direcetion;
	float movementSpeed;

public:
	// apparently supposed to use snake_case for local variables
	Bullet();
	Bullet(sf::Texture* texture, float posX, float posY, float dirX, float dirY, float movementSpeed);
	virtual ~Bullet();

	// Accessor
	const sf::FloatRect getBounds() const;

	void update();
	void render(sf::RenderTarget* target);
};

#endif // !BULLET_H