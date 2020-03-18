//
//  Component.hpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/16/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#ifndef Component_hpp
#define Component_hpp

#include "Object.hpp"
#include "SnowEngine.hpp"
//#include "GameObject.hpp"

namespace SnowEngine {
    class Component : protected SnowEngine::Object {
    protected:
        SnowEngine::GameObject* gameObject_;
        
    public:
        Component();
        ~Component();
        SnowEngine::GameObject* getGameObject();
    };
}

#endif /* Component_hpp */
