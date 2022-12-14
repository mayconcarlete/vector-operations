#ifndef FORCE_H
#define FORCE_H

#include "./Vec2.h"
#include "./Particle.h"

class Force {
  public:
    static Vec2 GenerateDragForce(const Particle& particle, float k);
    static Vec2 GenerateFrictionForce(const Particle& particle, float frictionMagnitude);
    static Vec2 GenerateGravitationalForce(const Particle& a, const Particle& b, float G, float minDistance, float maxDistance);
    static Vec2 GenerateSpringForce(const Particle& particle, Vec2 anchor, float restlength, float k);
};

#endif