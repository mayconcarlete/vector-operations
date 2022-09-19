#include "Vec2.h"
#include "Particle.h"
#include <iostream>

Particle::Particle(float x, float y, float mass){
  this->position = Vec2(x, y);
  this->acceleration = Vec2();
  this->mass = mass;
  std::cout << "Particle constructor called!" << std::endl;
}

Particle::~Particle(){
  std::cout << "Particle destructor called!" << std::endl;
}

float Particle::GetXPosition() const {
  return this->position.GetX();
}

float Particle::GetYPosition() const {
  return this->position.GetY();
}

Vec2& Particle::GetPosition() {
  return this->position;
}

void Particle::SetXPosition(float x){
  this->position.SetX(x);
}

void Particle::SetYPosition(float y){
  this->position.SetY(y);
}

void Particle::UpdateVelocity(){
  this->velocity += this->acceleration;
}

void Particle::SetXVelocity(const float x){
  this->velocity *= x
}

void Particle::SetYVelocity(const float y){
  this->velocity.SetY(y);
}

float Particle::GetXVelocity() const{
  return this->velocity.GetX();
}

float Particle::GetYVelocity() const {
  return this->velocity.GetY();
}

void Particle::AddPosition(Vec2 position){
  this->position.Add(position);
}

Vec2 Particle::GetVelocity() const {
  return this->velocity;
}

Particle& Particle::operator += (const Vec2& v){
  this->position.Add(v);
  return *this;
}

void Particle::SetAcceleration(const Vec2 v){
  this->acceleration = v;
}