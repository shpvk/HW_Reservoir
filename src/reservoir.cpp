#include "reservoir.h"
#include <cstring>
#include <iostream>

    void Reservoir::set_width(int width)
    {
        m_width = width;
    }
    void Reservoir::set_depth(int depth)
    {
        m_depth = depth;
    }

    int Reservoir::get_width()
    {
        return m_width;
    }
    int Reservoir::get_depth()
    {
        return m_depth;
    }