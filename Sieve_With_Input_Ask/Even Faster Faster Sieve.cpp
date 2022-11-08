#include <iostream>
#include <vector>
using std::vector;
#include <cmath>
#include<fstream> // write to CSV

int main(){


    vector<bool> marked{};


    unsigned int number = 0;

    std::cout << "Please insert a number: ";
    std::cin >> number;

    for (unsigned int i = 3; i < number; i+=2)
    {
        marked.push_back(true);
    }


    unsigned int start = 3;
    unsigned int step = 3;
    for (unsigned int i = 3; i < sqrt(number); i+=2)
    {
        //make sure we increment by the step each time
        
        for (unsigned int b = start * start; b < number; b += step + step)
        {

            marked[((b-1)/2)-1] = false;
                       
        }




        step+=2;
        start+=2;
    }

unsigned long long prime_sum{};


// convert bool to prime
unsigned int counter = 0;


//std::cout << 2 << std::endl;
prime_sum += 2;
    for (size_t i : marked)
    {   
        i=(3 + counter)*i ;
        
        // the following lists all primes
        // std::cout << i << std::endl;
        prime_sum+=i;
        counter+=2;
        
    }

std::cout << "The sum of all primes up until: " << number << " is: " << prime_sum << std::endl;

/* expot to csv
std::ofstream outFile("my_file.txt");
for (const auto &e : marked) outFile << e << "\n";
*/


  }
