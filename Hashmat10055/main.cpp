#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>

int main() {

    //never submit a project for a competition with freopen
    //freopen("/Users/allis/source/repos/hashtagallison/Intro_CC_Workshop/Hashmat10055")

    long long int num1, num2;

    while (scanf("%lld %lld", &num1, &num2) != EOF){
        std::cout << llabs(num1 - num2) << std::endl;

        /*
         If (num1 > num2) {
         std::cout << num1 - num2 << std::endl;
         } else {
         std::cout << num2 - num1 << std:: endl;
         }
        */
    }

    return 0;
}