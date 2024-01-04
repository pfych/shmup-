#pragma once

#include "SFML/Graphics.hpp"

struct Coordinate {
    float x;
    float y;
};

class Point {
public:
    float x;
    float y;
    sf::Color color;

    Point(float _x, float _y, bool _dragable);

    void update(float deltaTime, sf::RenderWindow &window, sf::View &view);

    void draw(sf::RenderWindow &window);

private:
    bool isDragging;
    bool dragable;
    sf::CircleShape shape;
};