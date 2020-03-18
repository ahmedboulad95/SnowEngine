//
//  Media.cpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/14/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#include "Media.hpp"

SnowEngine::Media::Media() {}

SnowEngine::Media::~Media() {
    clean();
}

void SnowEngine::Media::init(const char* title, int xpos, int ypos, int width, int height, bool fullScreen) {
    std::cout << "Initializing media instance" << std::endl;
    
    isRunning_ = false;
    
    int flags = 0;
    if(fullScreen) {
        flags = SDL_WINDOW_FULLSCREEN;
    }
    
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        std::cout << "SDL initialization failed. SDL_ERROR: " << SDL_GetError() << std::endl;
    } else {
        window_ = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        
        if(window_ == nullptr) {
            std::cout << "Failed to create window. SDL_ERROR: " << SDL_GetError() << std::endl;
        } else {
            renderer_ = SDL_CreateRenderer(window_, -1, 0);
            
            if(renderer_ == nullptr) {
                std::cout << "Failed to create renderer. SDL_Error: " << SDL_GetError() << std::endl;
            } else {
                SDL_SetRenderDrawColor(renderer_, 255, 255, 255, 255);
                SDL_RenderClear(renderer_);
                SDL_RenderPresent(renderer_);
                isRunning_ = true;
            }
        }
    }
}

void SnowEngine::Media::handleEvents() {
    SDL_Event event;
    SDL_PollEvent(&event);
    
    switch(event.type) {
        case SDL_QUIT:
            isRunning_ = false;
        default:
            break;
    }
}

void SnowEngine::Media::render() {
    SDL_RenderClear(renderer_);
    // Render stuff
    SDL_RenderPresent(renderer_);
}

bool SnowEngine::Media::running() {
    return isRunning_;
}

void SnowEngine::Media::clean() {
    std::cout << "Cleaning up SDL objects..." << std::endl;
    SDL_DestroyWindow(window_);
    SDL_Quit();
}
