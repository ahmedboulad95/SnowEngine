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
        Game();
        Game(std::string title);
        ~Game();
        void start();
        void loop();
    };
}

#endif /* Game_hpp */
