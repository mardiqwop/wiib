
//Wiib - a Wii Homebrew multiplayer game
//Copyright (C) 2017 Mardigon Toler

//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

//You should have received a copy of the GNU General Public License
//along with this program.  If not, see <http://www.gnu.org/licenses/>.

#pragma once
#include "ecs.h"
#include <grrlib.h>
#include "ecs.h"
#include "graph.hpp"
#include <queue>

/**
This file actually defines entities to be used with
an entity component system: OPENECS
https://github.com/Gronis/OpenEcs

**/

using namespace ecs;

struct HitPoints
{
  HitPoints(int _val) : hp(_val)
  {
  }
  int hp ;
};

// the id of the player to ally with
struct Allegiance
{
  Allegiance(int _val) : alliedID(_val)
  {
  }
  int alliedID;
};

struct Status
{
  Status(f32 x, f32 y) : xpos(x), ypos(y)
  {
  }
  f32 xpos, ypos, xnoise, ynoise;
  f32 stepSpeed = 0.1;
};

struct Grabbable{
};

struct Solid{
};

struct Projectile{ 
    Projectile(f32 _xcomp, f32 _ycomp): xcomp(_xcomp), ycomp(_ycomp){}
    f32 xcomp, ycomp;
    int damage = 10;
};

struct Drawable
{
  Drawable(GRRLIB_texImg *_ptexture) : ptexture(_ptexture)
  {
  }
  GRRLIB_texImg *ptexture;
  u32 color = 0xFFFFFFFF;
};


// A component to represent the bases of both players
// Entites with this should also have an allegiance component
struct PlayerBase
{
    PlayerBase(){}
};


// Make a component that simply stores a smart pointer
// to the current graph, so that systems can see the graph
struct GraphPointer{
    shared_ptr<Graph> gptr;
};

struct TexPointer
{
    TexPointer(string _name, GRRLIB_texImg *_ptexture ):
            name(_name),
            ptexture(_ptexture)
    {
    }
    string name;
    GRRLIB_texImg *ptexture;
};



// include the destination Vertex itself
// as well as a path that leads to it, implemented
// as a queue of pointers to vertices
// The system that works with this component
// usually tries to move an entity towards the next
// vertex in the vector. 
struct Path{
  unsigned int nearestVertID;
  queue<shared_ptr<Vertex>> vertices;
  f32 radius = 11;
};

class PathSystem : public System
{
  public:
    void update(float time) override;
};

class MinionLogicSystem : public System
{
    public:
    void update(float time) override;
};

class ProjectileSystem : public System
{
    public:
    void update(float time) override;
};

class HealthSystem : public System
{
    public:
    void update(float time) override;
};





class DrawingSystem : public System
{
public:
  void update(float time) override;
};

class InputSystem : public System
{
  public:
    void update(float time) override;
};



