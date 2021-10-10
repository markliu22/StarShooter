#include "Bullet.h"

Bullet::Bullet() {

}

Bullet::Bullet(sf::Texture* texture, float posX, float posY, float dirX, float dirY, float movementSpeed) {
	this->shape.setTexture(*texture);
	this->shape.setPosition(posX, posY);
	this->direcetion.x = dirX;
	this->direcetion.y = dirY;
	this->movementSpeed = movementSpeed;
}

Bullet::~Bullet() {

}

const sf::FloatRect Bullet::getBounds() const
{
	return this->shape.getGlobalBounds();
}

void Bullet::update() {
	// Movement
	this->shape.move(this->movementSpeed * this->direcetion);
}

void Bullet::render(sf::RenderTarget* target) {
	target->draw(this->shape);
}
