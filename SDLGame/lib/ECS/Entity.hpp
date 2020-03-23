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
            const char* entityId_;                      // Need to create EntityId class
            const char* std::string entityTypeId_;     // Need to create EntityTypeId class
            
        public:
            Entity() {}
            ~Entity() {}
            std::string getEntityId() { return this->entityId_; }
            
            /*template<class T>
            T* getComponent() { return this->componentManagerInstance_->getComponent<T>(this->entityId_); }
            
            template<class T>
            T* addComponent(T* newComponent) { return this->componentManagerInstance_->addComponent(this->entityId_, newComponent); }
            
            template<class T>
            void removeComponent(T* component) { this->componentManagerInstance_->removeComponent(this->entityId_, component); }*/
        };
    }
}

#endif /* Entity_hpp */
