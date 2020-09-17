//
//  ComponentManager.hpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/18/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#ifndef ComponentManager_hpp
#define ComponentManager_hpp

#include <unordered_map>
#include <vector>
#include "Component.hpp"

namespace SnowEngine {
    namespace ECS {
        class ComponentManager {
        private:
            using ComponentRegistry = std::unordered_map<const char*, SnowEngine::ECS::Component*>;
            using ComponentMap = std::unordered_map<const char*, SnowEngine::ECS::Component*>;
            using EntityComponentMap = std::unordered_map<const char*, ComponentMap>;
            
            ComponentRegistry componentRegistry_;
            EntityComponentMap entityComponentMap_;
            
        public:
            ComponentManager() {}
            ~ComponentManager() {}
            
            template<class T>
            T* getComponent(const char* entityId) {
                const char* componentTypeId = T::COMPONENT_TYPE_ID;
                EntityComponentMap::const_iterator entityCmpMapIt = this->entityComponentMap_.find(entityId);
                
                if(entityCmpMapIt != this->entityComponentMap_.end()) {
                    ComponentMap::const_iterator cmpIt = entityCmpMapIt->second.find(componentTypeId);
                    return cmpIt->second;
                }
                
                return nullptr;
            }
            
            template<class T>
            T* addComponent(const char* entityId) {
                const char* componentTypeId = T::STATIC_COMPONENT_TYPE_ID;
                
                EntityComponentMap::const_iterator cmpMapIt = this->entityComponentMap_.find(entityId);
                
                if(cmpMapIt == this->entityComponentMap_.end()) {
                    this->entityComponentMap_.emplace(entityId, ComponentMap());
                } else {
                    ComponentMap::const_iterator cmpIt = cmpMapIt->second.find(componentTypeId);
                    
                    if(cmpIt != cmpMapIt->second.end()) {
                        return cmpIt->second;
                    }
                }
                
                SnowEngine::ECS::Component* cmp = new T();
                
                this->entityComponentMap_[entityId].emplace(componentTypeId, cmp);
                return cmp;
            }
            
            template<class T>
            void removeComponent(const char* entityId) {
                const char* componentTypeId = T::STATIC_COMPONENT_TYPE_ID;
                this->entityComponentMap_[entityId].erase(componentTypeId);
            }
        };
    }
}

#endif
