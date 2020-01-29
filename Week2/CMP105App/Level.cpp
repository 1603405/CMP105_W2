#include "Level.h"
#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include <string.h>
#include <iostream>

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
}

Level::~Level()
{
	input = nullptr;
}

// handle user input
void Level::handleInput()
{
	if (input->isKeyDown(sf::Keyboard::W)) 
	{
		if (input->isKeyDown(sf::Keyboard::A))
		{
			if (input->isKeyDown(sf::Keyboard::D))
			{

				std::cout << " d is down\n";
			}
		}
	} 

	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	
	std::cout << input->getMouseX();


}

// Update game objects
void Level::update()
{
}

// Render level
void Level::render()
{
	beginDraw();
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}