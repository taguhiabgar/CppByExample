//
//  NewHelloWorld.cpp
//  CppByExample
//
//  Created by Taguhi Abgar on 22.10.25.
//

#include <iostream>

// Trailing return type notation (since C++11)

auto printHelloWorld() -> void {
    std::cout << "Hello, world!\n";
}

// This syntax was added mainly for templates and lambdas,
// where the return type depends on the parameter types.
// Here, decltype(a + b) might not be known before parsing the parameters,
// so the trailing return type allows you to declare it afterward.
template <typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}

