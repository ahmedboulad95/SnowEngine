//
//  ComponentManager.hpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/18/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#ifndef ComponentManager_hpp
#define ComponentManager_hpp

#include <string>

namespace SnowEngine {
    namespace ECS {
        class ComponentManager {
        public:
            ComponentManager();
            ~ComponentManager();
            
            template<class T>
            T* getComponent(const std::string entityId);
            
            template<class T>
            T* addComponent(const std::string entityId, T newComponent);
            
            template<class T>
            void removeComponent(const std::string entityId);
        };
    }
}

#endif /* ComponentManager_hpp */
