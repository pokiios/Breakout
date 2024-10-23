#pragma once
#include "PowerupBase.h"
#include "Paddle.h"

class PowerupFastPaddle :
    public PowerupBase
{
    PowerupFastPaddle(sf::RenderWindow* window, Paddle* paddle, Ball* ball);
    ~PowerupFastPaddle();

    std::pair<POWERUPS, float> applyEffect() override; // Method to apply the power-up effect
};

