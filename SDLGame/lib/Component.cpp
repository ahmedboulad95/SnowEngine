//
//  Component.cpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/16/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#include "Component.hpp"

SnowEngine::Component::Component() {}

SnowEngine::Component::~Component() {}

SnowEngine::GameObject* SnowEngine::Component::getGameObject() {
    return gameObject_;
}
