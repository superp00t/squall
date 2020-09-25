#ifndef STORM_ARRAY_TS_BASE_ARRAY_HPP
#define STORM_ARRAY_TS_BASE_ARRAY_HPP

#include <cstdint>

template<class T>
class TSBaseArray {
    public:
    uint32_t m_alloc = 0;
    uint32_t m_count = 0;
    T* m_data = nullptr;

    T& operator[](uint32_t i);
    uint32_t Count(void);
    void Clear(void);
};

template<class T>
T& TSBaseArray<T>::operator[](uint32_t i) {
    return this->m_data[i];
}

template<class T>
uint32_t TSBaseArray<T>::Count() {
    return this->m_count;
}

template<class T>
void TSBaseArray<T>::Clear() {
    delete[] this->m_data;
    TSBaseArray<T>();
}

#endif