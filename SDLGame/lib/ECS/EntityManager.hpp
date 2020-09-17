//
//  EntityManager.hpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/18/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#ifndef EntityManager_hpp
#define EntityManager_hpp

#include <unordered_map>
#include "Entity.hpp"

namespace SnowEngine {
    namespace ECS {
        class EntityManager {
        private:
            using EntityRegistry = std::unordered_map<const char*, SnowEngine::ECS::Entity*>;
            
            EntityRegistry entityRegistry_;
            
        public:
            EntityManager() {}
            ~EntityManager() {}
            
            template<class T>
            T* addEntity(SnowEngine::ECS::Entity* newEntity) {}
        };
    }
}

#endif /* EntityManager_hpp */
