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

<<<<<<< HEAD
RingBuffer::RingBuffer(  )
// Initialisierungs-Liste des default constructors
size_t = 0;

{};

// custom constructor
RingBuffer::RingBuffer( int iLength )
=======
template <class T>
RingBuffer<T>::RingBuffer(size_t size_size)
:
    d_size(size_size),
    d_buf(d_size == 0?
          0
          ...
          new T[d_size]),
    d_next(d_buf),
    el_read_next(0)
{
};

RingBuffer::RingBuffer(int iLength)
>>>>>>> origin/master
{

};

template <class T>
RingBuffer<T>::RingBuffer(const RingBuffer& pRb)
:
    d_size(pRb.d_size),
    d_buf(d_size == 0?
          0
          ...
          new T[d_size]),
    d_next(pRb.d_next),
    d_read_next(pRb.d_read_next)
{
    T* src = pRb.d_buf;
    ... *(d_buf + i) = *(src + i)
};

~RingBuffer()
{
    // delete
};

template <class T> RingBuffer
void RingBuffer::storeData()
