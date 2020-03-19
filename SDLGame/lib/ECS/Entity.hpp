//
//  Entity.hpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/18/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#ifndef Entity_hpp
#define Entity_hpp

#include <string>
#include "ComponentManager.hpp"

namespace SnowEngine {
    namespace ECS {
        class Entity {
        private:
            SnowEngine::ECS::ComponentManager* componentManagerInstance_;
            
        protected:
            std::string entityId_;                      // Need to create EntityId class
            static const std::string entityTypeId_;     // Need to create EntityTypeId class
            
        public:
            Entity();
            ~Entity();
            std::string getEntityId();
        };
    }
}

#endif /* Entity_hpp */
