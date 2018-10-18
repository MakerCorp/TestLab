#pragma once

#include "stdafx.h"
#include <sstream>
#include "SplashState.h"
#include "DEFINITIONS.h"

#include <iostream>

using namespace std;
using namespace sf;

namespace MakerCorp
{
	SplashState::SplashState(GameDataRef data) : _data(data)
	{
		
	}

	void SplashState::Init()
	{
		this->_data->assets.LoadTexture("Splash State Background", SPLASH_SCENE_BACKGROUND_FILEPATH);

		_background.setTexture(this->_data->assets.GetTexture("Splash State Background"));
	}

	void SplashState::HandleInput()
	{
		Event event;

		while (this->_data->window.pollEvent(event))
		{
			if (Event::Closed == event.type)
			{
				this->_data->window.close();
			}
		}
	}

	void SplashState::Update(float dt)
	{
		if (this->_clock.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME)
		{
			// Swich To main menu
			cout << "Go To Main Menu" << endl;
		}
	}

	void SplashState::Draw(float dt)
	{
		this->_data->window.clear(Color::Red);

		this->_data->window.draw(this->_background);

		this->_data->window.display();
	}
}






