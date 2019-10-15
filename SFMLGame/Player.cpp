#include "Player.h"

Player::Player()
{
	if (!m_texture.loadFromFile("faceleft.png"));
	{
		//error
	}
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(350, 200);

};
Player::~Player(){};

void Player::initialize()
{
	//cout << "Player initialize" << endl;
}
void Player::update()
{
	//cout << "Player updating" << endl;
}
void Player::draw(sf::RenderWindow* t_window)
{
	t_window->draw(m_sprite);
	//cout << "Player drawing" << endl;
}