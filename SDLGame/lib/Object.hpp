//
//  Object.hpp
//  SDLGame
//
//  Created by Ahmed Boulad on 3/16/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#ifndef Object_hpp
#define Object_hpp

namespace SnowEngine {
    class Object {
    protected:
        char* name;
        
    public:
        Object();
        ~Object();
        static Object* instantiate(Object* original);
    };
}

#endif /* Object_hpp */
