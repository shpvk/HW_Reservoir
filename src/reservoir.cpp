#include "reservoir.h"
#include <cstring>
#include <iostream>


    int Reservoir::find_area()
    {
        return m_width * m_length;
    }

    Reservoir::Reservoir(Reservoir& obj)
    {
        m_name = new char[strlen(obj.m_name)+1];
        strcpy(m_name, obj.m_name);

        m_width = obj.m_width;
        m_depth = obj.m_depth;
        m_length = obj.m_length;
    }

    int Reservoir::find_volume()
    {
        return m_width * m_depth;
    }

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

    Reservoir::Reservoir()
    {
        m_name = nullptr;
        m_width = 0;
        m_depth = 0;
        m_length = 0;

    }

    Reservoir::Reservoir(const char* name, int width, int depth, int length)
    {
        m_name = new char[strlen(name)+1];
        strcpy(m_name, name);

        m_width = width;
        m_depth = depth;
        m_length = length;
    }


    Reservoir::~Reservoir()
    {
        delete[] m_name;
        m_width = 0;
        m_depth = 0;
        m_length = 0;
    }