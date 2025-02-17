//
//  GameObject.cpp
//  Sedimental Storm
//
//  Created by Jacob Cohen on 1/13/15.
//  Copyright (c) 2015 Jacob Cohen. All rights reserved.
//

#include "GameObject.h"

GameObject::GameObject() : _parent(nullptr)
{
}

//Copy constructor does not copy parent child relationships
GameObject::GameObject (const GameObject& obj) : _parent(nullptr), sf::Transformable(obj)
{
}


//If you assign one game object to another it will copy over parameters but not parent child relationships
GameObject& GameObject::operator=(const GameObject& obj)
{
    if(&obj == this){
        return *this;
    }
    
    setPosition(obj.getPosition());
    setRotation(obj.getRotation());
    setScale(obj.getScale());
    setOrigin(obj.getOrigin());
    
	return *this;
}

bool GameObject::IsTopLevel() {
	return (_parent == nullptr);
}

sf::Vector2f GameObject::getWorldPosition(){
	return sf::Vector2f(0, 0);
}


//Virtual functions
void GameObject::SetParent(GameObject* parent){
    _parent = parent;
    parent->_children.push_back(this);
}


void GameObject::Draw(sf::RenderTarget& target, sf::RenderStates& renderState)
{
}

void GameObject::Update(){}
GameObject::~GameObject(){}
