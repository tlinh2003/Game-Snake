#include "Collideable.hpp"

namespace SnakeGame {

Collideable::Collideable(int x, int y) : Drawable(x, y) {}

bool Collideable::collidesWith(Collideable& other) {
    return m_x == other.m_x && m_y == other.m_y;
}

} 