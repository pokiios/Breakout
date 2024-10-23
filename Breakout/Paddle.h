#pragma once

#include <SFML/Graphics.hpp>
#include "CONSTANTS.h"

class Paddle
{
public:
    Paddle(sf::RenderWindow* window);
    ~Paddle();

    void moveLeft(float dt);
    void moveRight(float dt);
    void update(float dt);
    void render();
    void setSpeed(float, float); // change speed of paddle based on powerup
    sf::FloatRect getBounds() const;
    void setWidth(float coeff, float duration);
protected:
    float speedMult = 0;
private:
    float _speed = PADDLE_SPEED;

    sf::RenderWindow* _window;
    sf::RectangleShape _sprite;
    float _width = PADDLE_WIDTH;
    bool _isAlive;
    float _timeInNewSize = 0.0f;
    float _timeInFastPaddle = 0.f; // keep track of how long they have with the fast paddle
};
