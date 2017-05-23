template <class T> RingBuffer
{
    size_t d_size;                          // Number of Data
    //bool overwrite;                       // sollte überflüssig sein
    T* d_buf;                               // Data Buffer
    T* d_next;                              // Pointer to next data location
public:
    RingBuffer();                           // Default-Constructor
    RingBuffer(size_t);                     // Custom-Constructor
    RingBuffer(const RingBuffer&)           // Copy-Constructor
    ~RingBuffer();                          // Destructor

    void storeData(T);                      // store data element
    T readData();                           // read data element
    bool isEmpty() const;                   // empty RingBuffer ?
    void eraseBuffer();                     // erase data from buffer
    RingBuffer& operator= (RingBuffer&);    // overload assignment operator
}
