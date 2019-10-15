#include "NPC.h"

NPC::NPC()
{
	if (!m_texture.loadFromFile("face.png"));
	{
		//error
	}
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(200, 200);
};
NPC::~NPC(){};

void NPC::initialize()
{
	/*cout << "NPC initialize" << endl;*/
}
void NPC::update()
{
	/*cout << "NPC updating" << endl;*/
}
void NPC::draw(sf::RenderWindow *t_window)
{
	/*cout << "NPC drawing" << endl;*/
	t_window->draw(m_sprite);
}