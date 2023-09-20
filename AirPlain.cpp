
#include <iostream>

namespace zy {

    class AirPlane{
        private:
            int wings;
            int wheels;

        public:
            AirPlane(){
                wings = 2;
                wheels = 3;
            }
            ~AirPlane(){
                std::cout << "~AirPlain"<< std::endl;
            }

        public:
            void setWings(int w){
                wings = w;
            }
            int getWings(){
                return wings;
            }
            void setWheels(int w){
                wheels = w;
            }
            int getWheels(){
                return wheels;
            }
    };
};