#ifndef GETFULLNAME

#if defined(__GNUC__) || defined(__clang__)
#include <cxxabi.h>
template<typename T>
constexpr const char* getFullName(const T& any){
    return abi::__cxa_demangle(typeid(any).name(), nullptr, nullptr, nullptr);
}

template<typename T>
constexpr const char* getFullName(){
    return abi::__cxa_demangle(typeid(T).name(), nullptr, nullptr, nullptr);
}
#elif defined(_MSC_VER)

template<typename T>
constexpr const char* getFullName(const T& any){
    return typeid(any).name();
}

template<typename T>
constexpr const char* getFullName(){
    return typeid(T).name();
}

#endif
#endif
