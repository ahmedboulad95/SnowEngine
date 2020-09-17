//
//  uuid.cpp
//  SDLGame
//
//  Created by Ahmed Boulad on 9/16/20.
//  Copyright © 2020 ahmedboulad. All rights reserved.
//

#ifndef UUID_hpp
#define UUID_hpp

#include <string>
#include <cstdlib>
#include <ctime>

class UUID {
    private:
        std::string characterSet_ = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        int numCharacters_ = 15;
    
    public:
        std::string generateUUID() {
            std::srand(std::time(nullptr));
            
            std::string uuid = "";
            for(int i = 0; i < this->numCharacters_; ++i) {
                int index = std::rand() % this->characterSet_.length();
                uuid += this->characterSet_[index];
            }
            return uuid;
        }
};

#endif /* UUID_hpp */
