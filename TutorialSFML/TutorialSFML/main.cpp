#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 480), "SFML WORK!", sf::Style::Fullscreen);

	bool isFullscreen = true;

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::KeyReleased:
				switch (event.key.code)
				{
				case sf::Keyboard::Return:
					if ( true == isFullscreen )
					{
						window.create(sf::VideoMode(640, 480), "SFML WORK!", sf::Style::Default);

						isFullscreen = false;
					}
					else
					{
						window.create(sf::VideoMode(640, 480), "SFML WORK!", sf::Style::Fullscreen);

						isFullscreen = true;
					}

					break;
				}

				break;

			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		window.clear();

		window.display();
	}
}