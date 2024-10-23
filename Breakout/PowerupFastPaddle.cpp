#include "PowerupFastPaddle.h"

PowerupFastPaddle::PowerupFastPaddle(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball)
{
    _sprite.setFillColor(paddleEffectsColour); // Same colour as smallPaddle
}

PowerupFastPaddle::~PowerupFastPaddle()
{
}

std::pair<POWERUPS, float> PowerupFastPaddle::applyEffect()
{
    _paddle->setSpeed(1.5f, 5.f);
    return { fastPaddle, 5.0f };
}