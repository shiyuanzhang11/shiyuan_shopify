//
//  main.cpp
//  shopify
//
//  Created by Regan Zhang on 8/15/25.
//

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace::std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello Shopify!\n";
    vector<int> vt;
    for(int i=0;i<100;i++)
        vt.push_back(i);
    
    unordered_map<int, int> hash;
    hash[1]=10;
    hash[10]=100;
    return 0;
}
