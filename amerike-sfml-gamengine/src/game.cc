#include "game.hh"
#include "Constants.hh"
#include "rectangle.hh"

rectangle* Rectangle{new rectangle(100, 100, 200, 100, sf::Color::Red)};

Game::Game()
{
    window=new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_NAME);
    event=new sf::Event();
}

Game::~Game()
{

}
//Starting things
void Game::Start()
{

}

void Game::Initialize()
{
    Start();
    Loop();
}
//Logic, Animations, Etc
void Game::Update()
{
    
 
}

void Game::Loop()
{
while (window->isOpen())
  {
    while(window->pollEvent(*event))
    {
      if(event->type == sf::Event::Closed)
      {
        window->close();
      }
    }
    Input();
    Update();
    Render();
  }
  Destroy();
}
void Game::Render()
{
    window->clear(sf::Color::Black);
    Draw();
    window->display();
}
//Drawing sprites or geometry.
void Game::Draw()
{
 window->draw(*Rectangle->GetShape());
}
//Keyboars, Joysticks, etc.
void Game::Input()
{

}

void Game::Destroy()
{
    delete window;
    delete event;
}

