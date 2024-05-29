/*
 The following program demonstrates the vector container (a C++ Standard Template)
 which is similar to an array with an exception that it  automatically handles
 its own storage requirements in case it grows.
 */
#include <iostream>
#include <vector>

int main()
{
    //create a vector to store int
    std::vector<int> vec;
    int i;

    //display the original size of vec
    std::cout << "vector size = " << vec.size() << std::endl;

    //push 5 values into the vector
    for (i = 0; i < 5; i++){
        vec.push_back(i);
    }

    //display the extended size of vec
    std::cout << "extended vector size = " << vec.size() << std::endl;


    // access 5 values from the vector
    for(i = 0; i < 5; i++){
        std::cout << "value of vec [" << i << "] = " << vec[i] << std::endl;
    }

    // use iterator to access the values
   std::vector<int>::iterator v = vec.begin();
    while( v != vec.end()) {
        std::cout << "value of v = " << *v << std::endl;
        v++;
    }
    return 0;

}
