//
//  main.cpp
//  e calculator
//
//  Created by Pablo Garcia on 12/2/17.
//  Copyright © 2017 Pablo Garcia. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, const char * argv[]) {
    string g;
    while(1){
    srand (static_cast <unsigned> (time(0)));
    float iterations;
    int d = 0;
    
    cout << "How many iterations? ";
    cin >> iterations;

    for( int c = 0; c <= iterations; c = c + 1){
        float a = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
        float b = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
        
        for( int c = 2 ;a + b < 1; c = c + 1) {
            a = a + b;
            b = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
            d = d + c;
            
        }
        
        
    }
    cout << d/iterations ;
        cout<< "again? y/n ";
        cin>> g;
        if( g=="n")
            break;
    }
    return 0;
}
