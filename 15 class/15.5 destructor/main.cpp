#include <iostream>
#include <string_view>


class Dog{
    public:
        Dog() = default;
        ~Dog();
        Dog(std::string_view name_param,
        std::string_view breed_param,
        int p_age_param);

    private:
        std::string name;
        std::string breed;
        int* p_age{nullptr};
};


Dog::Dog(std::string_view name_param,
        std::string_view breed_param,
        int p_age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int{p_age_param};
}

Dog::~Dog(){
    delete p_age;
    std::cout << name + " destroied" << std::endl;
}

int main(){
    Dog my_dog{"Toto", "Shepherd", 5};
    return 0;
}
