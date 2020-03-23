//
//  Game.hpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/14/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <iostream>
#include <SDL2/SDL.h>
#include "Media.hpp"

namespace SnowEngine {
    class Game {
    private:
        SnowEngine::Media* media_;
        std::string windowTitle_;
        
    public:
        Game() :windowTitle_("SnowEngine Game") {}
        Game(std::string title) :windowTitle_(title) {}
        
        ~Game() {
            delete media_;
            media_ = nullptr;
        }
        
        void start() {
            std::cout << "Starting new game instance" << std::endl;
            media_ = new SnowEngine::Media();
            media_->init(windowTitle_.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
        }
        
        void loop() {
            std::cout << "Beginning game loop" << std::endl;
            
            if(media_ == nullptr) {
                std::cout << "Media not initialized. Game::start() must be called before loop" << std::endl;
            } else {
                while(media_->running()) {
                    media_->handleEvents();
                    // Update all gameobjects
                    media_->render();
                }
            }
        }
    };
}

#endif /* Game_hpp */
