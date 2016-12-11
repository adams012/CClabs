//
//  ParticleSystem.hpp
//  Particle 2_0
//
//  Created by Sydney Adams on 11/14/16.
//
//


#pragma once
#include "ofMain.h"
#include "Particle.hpp"

class ParticleSystem{
public:
    ParticleSystem(ofVec2f position);
    void update(ofVec2f force);
    void draw();
    
    
    vector<Particle>    mParticleList;
    ofVec2f             mPosition;
    int                 mEmitRate;
    bool                mIsAddingParticles;
    
};
