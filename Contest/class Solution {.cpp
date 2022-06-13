#include <iostream>
using namespace std;

class Solution {
public:
    int countOperations(int num1, int num2) {
        int total = 0;
        while(num1 != 0 && num2 != 0){
            if(num1 >= num2)  num1-=num2;
            else if(num1 < num2)  num2-=num1;
            total++;
        }
        return total;
    }
};