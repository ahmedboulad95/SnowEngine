//
//  Logger.hpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/21/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#ifndef Logger_hpp
#define Logger_hpp

#include <iostream>
#include "Component.hpp"

namespace SnowEngine {
    namespace ECS {
        class Logger : public SnowEngine::ECS::Component {
        public:
            Logger(const char* cmpId)
                :SnowEngine::ECS::Component::Component(cmpId)
            {}
            
            ~Logger() {
                SnowEngine::ECS::Component::~Component();
            }
            
            void info(const char* text) {
                std::cout << text << std::endl;
            }
        };
    }
}

#endif /* Logger_hpp */
