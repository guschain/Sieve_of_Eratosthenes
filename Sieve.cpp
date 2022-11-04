#include <iostream>
#include <vector>
using std::vector;

#include<fstream> // write to CSV

int main(){

    // this program uses the Sieve of Eratosthenes algorithm
    // it can be optimized by skipping duplicates
    vector<bool> marked{};

    unsigned int number = 2000000;

    for (unsigned int i = 2; i < number; i++)
    {
        marked.push_back(true);
    }


    unsigned int start = 2;
    unsigned int step = 2;
    for (unsigned int i = 2; i < number; i++)
    {
        //make sure we increment by the step each time
        
        for (unsigned int b = start + start; b < number; b += step)
        {

            marked[b-2] = false;
                       
        }




        step+=1;
        start++;
    }

unsigned long long prime_sum=0;


// convert bool to prime
unsigned int counter = 0;
    for (size_t i : marked)
    {   
        i=(2 + counter)*i ;
        // the following lists all primes
        // std::cout << i << std::endl;
        prime_sum+=i;
        counter++;
    }

std::cout << "The sum of all primes up until: " << number << " is: " << prime_sum << std::endl;

/* export to csv
std::ofstream outFile("my_file.txt");
for (const auto &e : marked) outFile << e << "\n";
*/


  }