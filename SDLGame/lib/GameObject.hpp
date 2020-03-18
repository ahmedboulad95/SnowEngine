//
//  GameObject.hpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/16/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#ifndef GameObject_hpp
#define GameObject_hpp

#include "Component.hpp"
#include <string>
#include <unordered_map>


namespace SnowEngine {
    class GameObject {
    protected:
        bool isActive_;
        std::string tag;
        //std::unordered_map<std::string, SnowEngine::Component> components;
        
    public:
        GameObject();
        ~GameObject();
    };
}

#endif /* GameObject_hpp */
