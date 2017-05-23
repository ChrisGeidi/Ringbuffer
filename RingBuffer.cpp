///////////////////////////////////////////////////////////////////////////////
//
// File: RingBuffer.cpp
//
// Ingenieurorientierte Programmierung
// Dr. Alexander Kling
//
// Carsten Bevermann
// Christoph Geitner
// Jens Reimer
// Marc Töpker
//
///////////////////////////////////////////////////////////////////////////////

#include "RingBuffer.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

RingBuffer::RingBuffer(  )
{

};

RingBuffer::RingBuffer( int iLength )
{

};

RingBuffer::RingBuffer( RingBuffer& adr_rb )
{

};

~RingBuffer()
{
    // delete
};

template <class T> RingBuffer
void RingBuffer::storeData()
