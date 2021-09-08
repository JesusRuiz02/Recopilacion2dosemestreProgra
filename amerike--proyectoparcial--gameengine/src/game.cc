#include "game.hh"
#include "Constants.hh"
#include "rectangle.hh"

rectangle* Rectangle{new rectangle(160, 40, 200, 30, sf::Color::Red)};
rectangle* Rectangle2{new rectangle(360, 40, 160, 70, sf::Color::Red)};
rectangle* Rectangle3{new rectangle(120, 40, 160, 110, sf::Color(141, 73, 37))};
rectangle* Rectangle4{new rectangle(80, 160, 280, 110, sf::Color(251, 197, 167))};
rectangle* Rectangle5{new rectangle(40, 80, 360, 110, sf::Color::Black)};
rectangle* Rectangle6{new rectangle(40, 80, 400, 110, sf::Color(251, 197, 167))};
rectangle* Rectangle7{new rectangle(40, 80, 120, 150, sf::Color(141, 73, 37))};
rectangle* Rectangle8{new rectangle(40, 80, 160, 150, sf::Color(251, 197, 167))};
rectangle* Rectangle15{new rectangle(40, 40, 240, 150, sf::Color(251, 197, 167))};
rectangle* Rectangle16{new rectangle(80, 40, 440, 150, sf::Color(251, 197, 167))};
rectangle* Rectangle9{new rectangle(40, 80, 200, 150, sf::Color(141, 73, 37))};
rectangle* Rectangle10{new rectangle(40, 40, 240, 190, sf::Color(251, 197, 167))};
rectangle* Rectangle11{new rectangle(80, 40, 400, 190, sf::Color(251, 197, 167))};
rectangle* Rectangle12{new rectangle(40, 40, 240, 190, sf::Color(141, 73, 37))};
rectangle* Rectangle13{new rectangle(40, 40, 360, 190, sf::Color(251, 197, 167))};
rectangle* Rectangle14{new rectangle(120, 40, 440, 190, sf::Color(251, 197, 167))};
rectangle* Rectangle17{new rectangle(40, 40, 400, 190, sf::Color::Black)};
rectangle* Rectangle18{new rectangle(40, 40, 160, 230, sf::Color(141, 73, 37))};
rectangle* Rectangle19{new rectangle(80, 40, 200, 230, sf::Color(251, 197, 167))};
rectangle* Rectangle20{new rectangle(160, 40, 360, 230, sf::Color::Black)};
rectangle* Rectangle21{new rectangle(240, 40, 200, 270, sf::Color(251, 197, 167))};
rectangle* Rectangle22{new rectangle(320, 40, 160, 310, sf::Color::Red)};
rectangle* Rectangle23{new rectangle(400, 40, 120, 350, sf::Color::Red)};
rectangle* Rectangle24{new rectangle(480, 40, 80, 390, sf::Color::Red)};
rectangle* Rectangle25{new rectangle(560, 40, 40, 430, sf::Color::Red)};
rectangle* Rectangle26{new rectangle(40, 120, 240, 310, sf::Color::Blue)};
rectangle* Rectangle27{new rectangle(40, 120, 360, 310, sf::Color::Blue)};
rectangle* Rectangle28{new rectangle(160, 40, 240, 390, sf::Color::Blue)};
rectangle* Rectangle29{new rectangle(560, 120, 40, 430, sf::Color(251, 197, 167))};
rectangle* Rectangle30{new rectangle(40, 40, 160, 430, sf::Color::Red)};
rectangle* Rectangle31{new rectangle(40, 40, 440, 430, sf::Color::Red)};
rectangle* Rectangle32{new rectangle(40, 40, 200, 430, sf::Color::Blue)};
rectangle* Rectangle33{new rectangle(80, 40, 280, 430, sf::Color::Blue)};
rectangle* Rectangle34{new rectangle(40, 40, 400, 430, sf::Color::Blue)};
rectangle* Rectangle35{new rectangle(320, 40, 160, 470, sf::Color::Blue)};
rectangle* Rectangle36{new rectangle(400, 40, 120, 510, sf::Color::Blue)};
rectangle* Rectangle37{new rectangle(120, 40, 160, 550, sf::Color::Blue)};
rectangle* Rectangle38{new rectangle(120, 40, 360, 550, sf::Color::Blue)};
rectangle* Rectangle39{new rectangle(120, 40, 400, 590, sf::Color(141, 73, 37))};
rectangle* Rectangle40{new rectangle(120, 40, 120, 590, sf::Color(141, 73, 37))};
rectangle* Rectangle41{new rectangle(160, 40, 80, 630, sf::Color(141, 73, 37))};
rectangle* Rectangle42{new rectangle(160, 40, 400, 630, sf::Color(141, 73, 37))};
rectangle* Rectangle43{new rectangle(800, 40, 0, 670, sf::Color(0, 143, 57))};
rectangle* Rectangle44{new rectangle(800, 80, 0, 710, sf::Color(141, 73 , 37))};
rectangle* Rectangle45{new rectangle(800, 790, 0, 0, sf::Color(59, 131, 189))};


























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
    window->clear(sf::Color::White);
    Draw();
    window->display();
}
//Drawing sprites or geometry.
void Game::Draw()
{
 window->draw(*Rectangle45->GetShape());
 window->draw(*Rectangle->GetShape());
 window->draw(*Rectangle2->GetShape());
 window->draw(*Rectangle3->GetShape());
 window->draw(*Rectangle4->GetShape());
 window->draw(*Rectangle5->GetShape());
 window->draw(*Rectangle6->GetShape());
 window->draw(*Rectangle7->GetShape());
 window->draw(*Rectangle8->GetShape());
 window->draw(*Rectangle9->GetShape());
 window->draw(*Rectangle10->GetShape());
 window->draw(*Rectangle11->GetShape());
 window->draw(*Rectangle12->GetShape());
 window->draw(*Rectangle13->GetShape());
 window->draw(*Rectangle14->GetShape());
 window->draw(*Rectangle15->GetShape());
 window->draw(*Rectangle16->GetShape());
 window->draw(*Rectangle17->GetShape());
 window->draw(*Rectangle18->GetShape());
 window->draw(*Rectangle19->GetShape());
 window->draw(*Rectangle20->GetShape());
 window->draw(*Rectangle21->GetShape());
 window->draw(*Rectangle22->GetShape());
 window->draw(*Rectangle23->GetShape());
 window->draw(*Rectangle24->GetShape());
 window->draw(*Rectangle25->GetShape());
 window->draw(*Rectangle26->GetShape());
 window->draw(*Rectangle27->GetShape());
 window->draw(*Rectangle28->GetShape());
 window->draw(*Rectangle29->GetShape());
 window->draw(*Rectangle30->GetShape());
 window->draw(*Rectangle31->GetShape());
 window->draw(*Rectangle32->GetShape());
 window->draw(*Rectangle33->GetShape());
 window->draw(*Rectangle34->GetShape());
 window->draw(*Rectangle35->GetShape());
 window->draw(*Rectangle36->GetShape());
 window->draw(*Rectangle37->GetShape());
 window->draw(*Rectangle38->GetShape());
 window->draw(*Rectangle39->GetShape());
 window->draw(*Rectangle40->GetShape());
 window->draw(*Rectangle41->GetShape());
 window->draw(*Rectangle42->GetShape());
 window->draw(*Rectangle43->GetShape());
 window->draw(*Rectangle44->GetShape());

 
 

 

 

 
 
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

