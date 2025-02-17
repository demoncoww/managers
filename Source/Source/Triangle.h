//
//  Triangle.h
//  Sedimental Storm
//
//  Created by Jacob Cohen on 1/20/15.
//  Copyright (c) 2015 Jacob Cohen. All rights reserved.
//

#ifndef __Sedimental_Storm__Triangle__
#define __Sedimental_Storm__Triangle__

#include <stdio.h>
#include "GameObject.h"
#include <Thor/Math.hpp>


class Triangle: public virtual GameObject, public virtual sf::ConvexShape
{
public:
    Triangle();
    virtual void Update();
	virtual void Draw(sf::RenderTarget& window, sf::RenderStates& renderState);
};

#endif /* defined(__Sedimental_Storm__Triangle__) */
