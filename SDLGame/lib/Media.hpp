//
//  Media.hpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/14/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#ifndef Media_hpp
#define Media_hpp

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

namespace SnowEngine {
    class Media {
    private:
        SDL_Window* window_;
        SDL_Renderer* renderer_;
        bool isRunning_;
        
    public:
        Media();
        ~Media();
        void init(const char* title, int xpos, int ypos, int width, int height, bool fullScreen);
        void handleEvents();
        void render();
        bool running();
        void clean();
    };
}

#endif /* Media_hpp */
