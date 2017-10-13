#include <catch.hpp>

#include "stack-0.0.2.hpp"

TEST_CASE("push") 
{
    stack<int> Stack;
    Stack.push(5);
    Stack.push(7);
    REQUIRE(Stack.count() == 2);
}

TEST_CASE("pop") 
{
    stack<int> Stack;
    Stack.push(5);
    Stack.push(7);
    Stack.push(9);
    Stack.pop();
    REQUIRE(Stack.count() == 2);
}
