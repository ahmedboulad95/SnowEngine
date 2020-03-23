//
//  main.cpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/14/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#include <iostream>
#include <SDL2/SDL.h>
#include "lib/Game.hpp"
#include "lib/ECS/ComponentManager.hpp"
#include "lib/ECS/components/Logger.hpp"

SnowEngine::Game* game = nullptr;

int main(int argc, const char * argv[]) {
    std::cout << "Starting game..." << std::endl;
    
    SnowEngine::ECS::Logger log = SnowEngine::ECS::Logger("testlogger");
    log.info("Testing info call");
    
    std::cout << "Logger is active: " << log.isActive() << std::endl;
    
    SnowEngine::ECS::ComponentManager cmpMgr = SnowEngine::ECS::ComponentManager();
    
    //game = new SnowEngine::Game();
    //game->start();
    //game->loop();
    
    //delete game;
    //game = nullptr;
    
    return 0;
}
