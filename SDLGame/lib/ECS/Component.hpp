//
//  Component.hpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/21/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#ifndef Component_hpp
#define Component_hpp

namespace SnowEngine {
    namespace ECS {
        class Component {
        protected:
            const char* componentId_;
            static const char* STATIC_COMPONENT_TYPE_ID;
            const char* ownerId_;
            bool isActive_;
            
        public:
            Component(const char* cmpId) {
                this->isActive_ = true;
                this->componentId_ = cmpId;
            }
            virtual ~Component() {}
            
            const char* getComponentId() const { return this->componentId_; }
            const char* getOwnerId() const { return this->ownerId_; }
            void setActive(bool state) { this->isActive_ = state; }
            bool isActive() const { return this->isActive_; }
        };
    }
}

#endif /* Component_hpp */
